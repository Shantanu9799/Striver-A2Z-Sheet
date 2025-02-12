class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        int left = 0, right = 0, n = arr.size(), sum = arr[0], maxLen = 0;
        while(right < n) {
            //before adding the right pointer value to the sum
            // check how much shift needed for the left pointer
            while(left <= right && sum > k) {
                // remove the leftmost element
                sum -= arr[left];
                // move the left pointer
                left++;
            }
            // if the sum and k value matched, update the maxLen
            if(sum == k) {
                maxLen = max(maxLen, right - left + 1);
            }
            // before adding the number we have to move the right pointer
            right++;
            // add the right pointer element to the sum
            // also check if we are inside the boundary
            if(right < n) sum += arr[right];
        }
        // return the value of maxlen
        return maxLen;
    }
};

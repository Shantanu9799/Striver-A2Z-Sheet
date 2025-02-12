class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        map<int, int> prfixSumMap;
        int sum = 0, maxLen = 0, n = arr.size();
        for(int i = 0; i < n; ++i) {
            // adding the array's i-th value
            sum += arr[i];
            // if the sum is equals to k
            if(sum == k) {
                maxLen = max(maxLen, i+1);
            }
            // finding if before that element, if the sum k occurs
            int rem = sum - k;
            if(prfixSumMap.find(rem) != prfixSumMap.end()) {
                maxLen = max(maxLen, i - prfixSumMap[rem]);
            }
            // whatever done till now, add the sum value to the map
            if(prfixSumMap.find(sum) == prfixSumMap.end()) prfixSumMap[sum] = i;
        }
        // return the value of maxLen contains the maximum length sum subarray
        return maxLen;
    }
};

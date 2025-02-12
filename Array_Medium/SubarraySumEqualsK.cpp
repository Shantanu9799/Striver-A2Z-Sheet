class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int, int> prefixSumMap;
        int sum = 0, count = 0, n = nums.size();
        for(int i = 0; i < n; ++i) {
            // adding the array's i-th value
            sum += nums[i];
            // if the sum is equals to k, update the count
            if(sum == k) {
                count++;
            }
            // finding if before that element, if the sum k occurs
            int rem = sum - k;
            if(prefixSumMap.find(rem) != prefixSumMap.end()) {
                // add the total numer of times the rem repeates before
                count += prefixSumMap[rem];
            }
            // whatever done till now, add the sum value to the map
            // if sum already present make it freq ++
            prefixSumMap[sum]++;
        }
        // return the value of count
        return count;
    }
};

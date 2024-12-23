class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mpp;

        for(int i = 0; i < nums.size(); ++i) {
            int num = nums[i];
            int num2 = target - nums[i];

            if(mpp.find(num2) != mpp.end()) {
                return {i, mpp[num2]};
            } else {
                mpp[num] = i;
            }

        }

        return {-1, -1};
    }
};

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int idx = 0;
        int i = 1;
        while(i < n) {
            if(nums[idx] == 0) {
                while(i < n && nums[i] == 0) {
                    i++;
                    if(i == n) {
                        return;
                    }
                }
                nums[idx] = nums[i];
                nums[i] = 0;
            }
            idx++;
            i++;
        }
    }
};
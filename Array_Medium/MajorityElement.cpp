class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int theElement = nums[0];
        int cnt = 1;
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] == theElement) {
                cnt++;
            } else {
                cnt--;
            }
            if(cnt == 0) {
                theElement = nums[i];
                cnt = 1;
            }
        }
        return theElement;
    }
};

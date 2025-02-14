class Solution {
  public:
    // Function to check if we can reach the last index from 0th index.
    bool canReach(vector<int> &arr) {
        // code here
        int maxReachIndex = 0;
        for(int i = 0; i < arr.size(); ++i) {
            // if we are stading at a index where we can even get till now
            // then for sure we can't reach the end
            if(i > maxReachIndex) return false;
            // else, update the maxReachIndex
            maxReachIndex = max(maxReachIndex, i + arr[i]);
        }
        // if we've not encountered the i > maxReachIndex,
        // definitely we're stading at the last index or cross the last index
        return true;
    }
};
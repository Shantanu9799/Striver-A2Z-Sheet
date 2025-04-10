// User function Template for C++

class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        // code here
        // 1. we have to find the break point index
        int n = arr.size(), idx = -1;
        for(int i = n-2; i >= 0; --i) {
            if(arr[i] < arr[i+1]) {
                idx = i;
                break;
            }
        }
        // if the arrangement is the maximum permutation
        // return the lowest possible one
        if(idx == -1) {
            reverse(arr.begin(), arr.end());
            return;
        }
        // 2. we need to find the possible smallest value index
        // which is greater than the idx value
        for(int i = n-1; i > idx; --i) {
            if(arr[i] > arr[idx]) {
                swap(arr[i], arr[idx]);
                break;
            }
        }
        // 3. reverse the rest portion form the idx
        reverse(arr.begin() + idx + 1, arr.end());
        return;
    }
};
class Solution {
  public:
    vector<int> passedBy(int a, int &b) {
        // code here
        vector<int> result;
        a += 1;
        b += 2;
        result.push_back(a);
        result.push_back(b);
        return result;
    }
};
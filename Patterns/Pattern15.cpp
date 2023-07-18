class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n-i; j++) {
                cout << (char)('A'+j);
            }
            cout << endl;
        }
    }
};
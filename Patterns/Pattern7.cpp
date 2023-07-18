class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int row = 1; row <= n; row++) {
            int space = n - row;
            for(int gap = 1; gap <= space; gap++) {
                cout << " ";
            }
            int star = (2*row) - 1;
            for(int col = 1; col <= star; col++) {
                cout << "*";
            }
            cout << endl;
        }
    }
};
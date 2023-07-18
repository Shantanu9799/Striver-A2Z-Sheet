class Solution{
public:
	
	void printTriangle(int n) {
	    // code here
	    for(int row = 1; row <= n; row++) {
	        for(int gap = 1; gap < row; gap++) {
	            cout << " ";
	        }
	        int star = 2*(n - row) + 1;
	        for(int col = 1; col <= star; col++) {
	            cout << "*";
	        }
	        cout << endl;
	    }
	}
};
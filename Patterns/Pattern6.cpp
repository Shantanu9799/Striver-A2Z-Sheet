class Solution{
public:
	
	void printTriangle(int n) {
	    // code here
	    for(int i = 0; i < n; i++) {
	        for(int j = 1; j <= n-i; j++) {
	            cout << j << " ";
	        }
	        cout << endl;
	    }
	}
};
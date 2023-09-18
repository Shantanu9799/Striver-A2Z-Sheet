// recursive function
vector<string> recursionFunc(vector<string> &v, int n, int i) {
    // base condition
	if(i == n+1) { // if i becomes n+1, return the vector.
		return v;
	}
	v.push_back("Coding Ninjas"); // putting the the string in the vector
	return recursionFunc(v, n, i + 1); // recursively calling the function
}

vector<string> printNTimes(int n) {
	// Write your code here.
	vector<string> v;
	return recursionFunc(v, n, 1); // returning the result of the recursive function
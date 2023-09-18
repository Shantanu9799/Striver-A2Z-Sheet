// recursive function
vector<int> OneToNWithoutLoop(vector<int> &v, int n, int i) {
    // base condition
    if(i == n+1) {
        return v; // if i becomes n+1, return the vector.
    }
    v.push_back(i); // putting the i-in vector
    return OneToNWithoutLoop(v, n, i+1); // recursively calling the function
}

// provided function
vector<int> printNos(int x) {
    // Write Your Code Here
    vector<int> v;
    return OneToNWithoutLoop(v, x, 1); // returning the result of the recursive function
}
vector<int> recursionPrintNos(vector<int> &v, int x) {
    // Write Your Code Here
    if(x == 0) {
        return v;
    }
    v.push_back(x);
    return recursionPrintNos(v, x-1);
}
vector<int> printNos(int x) {
    // Write Your Code Here
    vector<int> v;
    return recursionPrintNos(v, x);
}
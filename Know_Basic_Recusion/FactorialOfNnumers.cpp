// User function Template for C++

// using loops
class Solution {
  public:
    vector<long long> factorialNumbers(long long n) {
        // Write Your Code here
        vector<long long> nums;
        long long currNum = 1, idx = 2;
        nums.push_back(1);
        while(currNum*idx <= n) {
            nums.push_back(currNum*idx);
            currNum *= idx;
            idx++;
        }
        return nums;
    }
};


// using recursion
class Solution {
  public:
  
    vector<long long> helperFunction(long long n, vector<long long> nums, long long currNum, long long idx) {
        // return the vector, when currNum*idx is greater than n
        if(currNum*idx > n) {
            return nums;
        }
        // if not, call the same function adding currNum in the vector and currNum will be currNum*=idx and idx++
        currNum *= idx;
        nums.push_back(currNum);
        return helperFunction(n, nums, currNum, idx+1);
    }
  
    vector<long long> factorialNumbers(long long n) {
        // Write Your Code here
        vector<long long> nums;
        long long currNum = 1, idx = 1;
        return helperFunction(n, nums, currNum, idx);
    }
};

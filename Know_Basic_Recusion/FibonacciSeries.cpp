class Solution {
public:

    int helper(int n, int first, int second) {
        if(n == 0) return first+second;
        return helper(n-1, second, first+second);
    }

    int fib(int n) {
        if(n == 0) return 0;
        if(n == 1) return 1;
        return helper(n-2, 0, 1);
    }
};
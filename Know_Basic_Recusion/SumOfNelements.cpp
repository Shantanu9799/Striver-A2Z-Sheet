class Solution {
  long long sum = 0;
  public:
    long long sumOfSeries(long long n) {
        // code here
        
        if(n == 0){
            return sum;
        }
        
        sum = sum + (n*n*n);
        n--;
        sumOfSeries(n);
    }
};
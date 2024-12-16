class Solution {
  public:
  
    // helper function to calculate the sum
    int helperFunction(int n, int sum) {
        if(n == 0) {
            return sum;
        }
        int toBeAdded = n * n * n;
        sum += toBeAdded;
        return helperFunction(n-1, sum);
    }
  
    int sumOfSeries(int n) {
        // code here
        return helperFunction(n, 0);
    }
};



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

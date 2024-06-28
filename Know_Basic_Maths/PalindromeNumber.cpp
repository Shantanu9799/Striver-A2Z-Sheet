class Solution {
public:
    bool isPalindrome(int x) {
        int tmp = x;
        if(x < 0) return 0;
        long r = 0;      
        while(x){
         r = (r*10) + (x%10); 
         x /= 10;     
        }
        return (int) r == tmp ? 1 : 0;
    }
};
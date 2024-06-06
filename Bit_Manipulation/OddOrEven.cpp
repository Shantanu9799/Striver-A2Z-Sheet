class Solution{   
public:
    string oddEven(int N){
        // code here 
        return (N & 1) == 0 ? "even" : "odd"; 
    }
};
class Solution{
public:
    int evenlyDivides(int N){
        //code here
        int cnt = 0;
        int tmp = N;
        while(tmp != 0) {
            if((tmp%10!=0) && N%(tmp%10) == 0) cnt++;
            tmp /= 10;
        }
        return cnt;
    }
};
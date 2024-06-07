class Solution
{
public:
    int setBit(int N)
    {
        // Write Your Code here
        int i = 0, flag = 1;
        while(flag) {
            int tmp = N & (1 << i);
            if(tmp == 0) {
                flag = 0;
            }
            else i++;
        }
        // cout << N << " " << i << endl;
        return N | (1 << i);
    }
};
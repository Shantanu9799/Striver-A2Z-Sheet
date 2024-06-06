class Solution {
  public:
    void bitManipulation(int num, int i) {
        // your code here
        i--;
        // get bit
        int tmp = num;
        tmp &= (1 << i);
        int getBit = tmp == 0 ? 0 : 1;
        
        // set bit
        int setBit = getBit == 1 ? num : (num | (1 << i));
        
        // clear bit
        int clearBit = getBit == 0 ? num : (num ^ (1 << i));
        
        cout << getBit << " " << setBit << " " << clearBit;
    }
};
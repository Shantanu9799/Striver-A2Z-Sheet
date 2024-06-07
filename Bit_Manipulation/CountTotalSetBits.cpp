class Solution{
    public:
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
    int countSetBits(int N)
    {
        // Your logic here
        int count = 0;

        // Loop through each bit position
        for (int i = 0; (1 << i) <= N; ++i) {
            // Calculate number of full blocks of size 2^(i+1)
            int k = (N + 1) / (1 << (i + 1));
    
            // Calculate the number of set bits in full blocks
            count += k * (1 << i);
    
            // Calculate the number of set bits in the remaining numbers
            int remainder = (N + 1) % (1 << (i + 1));
            if (remainder > (1 << i)) {
                count += remainder - (1 << i);
            }
        }
    
        return count;
    }
};
class Solution
{
    void leftRotate(long arr[], int k, int n)
    {
        // long[] temp = new long[n];
        
        // for(int i=0; i<n; i++) {
        //     temp[i] = arr[(i+k)%n];
        // }
        
        // for(int i=0; i<n; i++) {
        //     arr[i] = temp[i];
        // }
        k = k%n;
        reverse(arr, 0, k-1);
        reverse(arr, k, n-1);
        reverse(arr, 0, n-1);
    }
    
    
    // reverse function
    void reverse(long[] arr, int s, int e) {
        while(s < e) {
            arr[s] = arr[s] ^ arr[e];
            arr[e] = arr[s] ^ arr[e];
            arr[s] = arr[s] ^ arr[e];
            s++; e--;
        }
    }
    
}

//User function Template for Java

class Solution {
    int print2largest(int arr[], int n) {
        // code here
        int largest = arr[0];
        int secondLarg = -1;
        for(int i=1; i<n; i++) {
            if(arr[i] > largest) {
                secondLarg = largest;
                largest = arr[i];
            } else if(arr[i] < largest && arr[i] > secondLarg) {
                secondLarg = arr[i];
            }
        }
        return secondLarg;
    }
}

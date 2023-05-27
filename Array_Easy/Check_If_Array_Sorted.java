// User function Template for Java

class Solution {
    boolean arraySortedOrNot(int[] arr, int n) {
        // code here
        boolean flag = true;
        
        for(int i=1; i<n; i++) {
            if(arr[i-1] > arr[i]) {
                flag = false;
                break;
            }
        }
        
        return flag;
    }
}

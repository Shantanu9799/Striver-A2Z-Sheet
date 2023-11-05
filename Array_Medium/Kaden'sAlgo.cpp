long long maxSubarraySum(vector<int> arr, int n)
{
    // Write your code here.
    long long maxSum = 0;
    long long sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
        maxSum = max(maxSum, sum);
        if(sum < 0) {
            sum = 0;
        }
    }
    return maxSum;
}
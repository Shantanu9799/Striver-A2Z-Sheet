int search(vector<int> &nums, int target) {
    // Write your code here.
    int s = 0, e = nums.size() - 1;
    while(s <= e) {
        int mid = s + (e-s)/2;
        if(nums[mid] == target) return mid;
        else if(nums[mid] < target) s = mid + 1;
        else e = mid - 1;
    }

    return -1;
}

// int recursionSearch(vector<int> nums, int s, int e, int target) {
//     if(s > e) {
//         return -1;
//     }
//     int mid = s + (e-s)/2;
//     if(nums[mid] == target) return mid;
//     if(nums[mid] < target) return recursionSearch(nums, mid+1, e, target);
//     return recursionSearch(nums, s, mid-1, target);
// }

// int search(vector<int> &nums, int target) {
//     // Write your code here.
//     int s = 0, e = nums.size()-1;
//     return recursionSearch(nums, s, e, target);
// }
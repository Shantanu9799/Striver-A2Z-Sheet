#include <vector>

int getSingleElement(vector<int> &arr) {
  // Write your code here.

  // bit mainpulation + linear traversal        Time Complexity - O(n)

  /*
  int ans = 0;
  for (auto it : nums) {
    ans ^= it;
  }
  return ans;
  */


  // binary search               Time Complexity - O(log n)

    int s = 0, e = arr.size()-1;
	int ans = 0;
	while(s <= e) {
		int mid = s + (e-s) / 2;
		if(mid == 0 || mid == arr.size()-1 || (arr[mid] != arr[mid+1] && arr[mid] != arr[mid-1])) {
			ans =  arr[mid];
			break;
		} else if(((mid&1) == 0 && arr[mid] == arr[mid+1]) || ((mid&1) == 1 && arr[mid] == arr[mid-1])) {
			s = mid + 1;
		} else {
			e = mid - 1;
		}
	}	
	return ans;

}
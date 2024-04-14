int upperBound(vector<int> &arr, int x, int n){
	// Write your code here.	
	int s = 0, e = n-1;
	while(s <= e) {
		int mid = s + (e-s)/2;
		if(arr[mid] <= x) s = mid + 1;
		else e = mid - 1;
	}
	return s;
}
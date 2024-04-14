int lowerBound(vector<int> arr, int n, int x) {
	// Write your code here
	int s = 0, e = n-1;
	while(s <= e) {
		int mid = s + (e-s)/2;
		if(arr[mid] < x) s = mid + 1;
		else e = mid - 1;
	}
	return s;
}


vector<int> sortedArray(vector<int> a, vector<int> b) {
  // Write your code here
  vector<int> list;
  int i = 0;
  int aLength = a.size();
  int j = 0;
  int bLength = b.size();
  // only taking the unique elements from both
  while (i < aLength && j < bLength) {
    if (a[i] < b[j]) {
      list.push_back(a[i]);
      int ele = a[i];
      i++;
      while (i < aLength && a[i] == ele) {
        i++;
      }
    } else if (a[i] == b[j]) {
      list.push_back(a[i]);
      int ele = a[i];
      i++;
      j++;
      while (i < aLength && a[i] == ele) {
        i++;
      }
      while (j < bLength && b[j] == ele) {
        j++;
      }
    } else {
      list.push_back(b[j]);
      int ele = b[j];
      j++;
      while (j < bLength && b[j] == ele) {
        j++;
      }
    }
  }
  // taking the remaining elements from vector<int> a
  while (i < aLength) {
    list.push_back(a[i]);
    int ele = a[i];
    i++;
    while (i < aLength && a[i] == ele) {
      i++;
    }
  }
  // taking the remaining elements from vector<int> b
  while (j < bLength) {
    list.push_back(b[j]);
    int ele = b[j];
    j++;
    while (j < bLength && b[j] == ele) {
      j++;
    }
  }
  // form above two only one gonna run for any particular

  return list;
}
#include <bits/stdc++.h> 
void sortArray(vector<int>& arr, int n)
{
    // Write your code here
    int zero = 0, one = 0, two = 0;
    for(int i : arr) {
        if(i == 0) zero++;
        if(i == 1) one++;
        if(i == 2) two++;
    }
    int idx = 0;
    while(zero-- > 0) arr[idx++] = 0;
    while(one-- > 0) arr[idx++] = 1;
    while(two-- > 0) arr[idx++] = 2;
}

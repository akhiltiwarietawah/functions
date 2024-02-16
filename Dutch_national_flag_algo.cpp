#include <bits/stdc++.h>
// this is dutch national flag algo used for sorting of array contains 0s, 1s & 2s only 
// TC = O[n]
// SC = O[1]

void  sortArray(vector<int> &arr, int n){
    int low = 0, mid = 0, high = n-1;
    while(mid<=high){
        if (arr[mid] == 0){
            swap(arr[low], arr[mid]);
            mid++ , low++
        }

        else if (arr[mid] == 1) mid++;
        else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}


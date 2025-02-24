#include<bits/stdc++.h>
using namespace std;


// lowerBound : First Occurance of Any Element 
// brute force method : linear search
// optimal/better : using binary search

int lowerBound (vector<int> &arr, int k) {
    int low = 0;
    int high = arr.size() - 1;
    int ans = -1;

    while (low <= high) {
        int mid = (low + high) /2;
        if (arr[mid] <= k) {
            ans = mid;
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return ans;
}
#include <bits/stdc++.h>
using namespace std;

int getFloor(vector<int> &arr, int x) {
    int low = 0, high = arr.size() - 1;
    int ans = -1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] <= x) {
            ans = mid;  
            low = mid + 1;  
        } else {
            high = mid - 1; 
        }
    }
    return (ans == -1) ? -1 : arr[ans];
}

int getCeil(vector<int> &arr, int x) {
    int low = 0, high = arr.size() - 1;
    int ans = -1;
    
    while (low <= high) {  
        int mid = low + (high - low) / 2;
        if (arr[mid] >= x) {
            ans = mid;
            high = mid - 1;  
        } else {
            low = mid + 1;
        }
    }
    return (ans == -1) ? -1 : arr[ans];
}

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
    return {getFloor(a, x), getCeil(a, x)};
}


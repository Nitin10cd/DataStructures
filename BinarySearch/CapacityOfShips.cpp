#include<bits/stdc++.h>
using namespace std;

int numOfDays (vector<int> &arr, int capacity) {
    int days = 1;
    int load = 0;
    for (int i = 0; i < arr.size(); i++) {
        if ((load+arr[i]) > capacity) {
            days = days+1;
            load = arr[i];
        } else {
            load+=arr[i];
        }
    }
    return days;
}

int shipWithinDays(vector<int> &weights, int days) {
    int low = *max_element(weights.begin(),weights.end());
    int high = accumulate(weights.begin(), weights.end(), 0);
    while(low <= high) {
        int mid = (low + high)/2;
        int day = numOfDays(weights,mid);
        int ans = accumulate(weights.begin(), weights.end(), 0);
        if (days >= day) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return low;
}

//brute force

// int shipWithinDays(vector<int>& weights, int days) {
//     int maximum = *max_element(weights.begin(),weights.end());
//     int sum = accumulate(weights.begin(), weights.end(), 0);
//     int i;
//     for (i = maximum; i < sum; i++) {
//         if (numOfDays(weights,i) <= days) {
//             return i;
//         }
//     }
//     return sum;
// }
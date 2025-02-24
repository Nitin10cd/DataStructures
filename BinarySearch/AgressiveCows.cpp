#include<bits/stdc++.h>
using namespace std;

bool canPlaceCow (vector<int> &arr, int distance, int noOfCows) {
    int countCows = 1;
    int coordinate = arr[0];
    for (int i = 0; i < arr.size(); i++) {
        countCows++;
        coordinate = arr[i];
    }
    if (countCows >= noOfCows) return true;
    else false;
}

int maximumOfMinimum (vector<int> &arr, int cows) {
    int low = 1;
    int high = *max_element(arr.begin(), arr.end());
    int ans = -1;
    while (low <= high) {
        int mid = (low+high)/2;
        if(canPlaceCow(arr,mid,cows)) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}
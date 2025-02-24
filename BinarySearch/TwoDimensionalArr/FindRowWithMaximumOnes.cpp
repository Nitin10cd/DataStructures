#include <bits/stdc++.h>
using namespace std;

int firstOccurance(vector<int> &num, int target) {
    int low = 0, high = num.size() - 1;
    int first = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (num[mid] == target) {
            first = mid;  
            high = mid - 1; 
        } else if (num[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return first;
}

int rowWithMax1s(vector<vector<int>> &arr) {
    int maxCnt = 0; 
    int index = -1; 

    int cols = arr[0].size();
    
    for (int i = 0; i < arr.size(); i++) {
        int firstIdx = firstOccurance(arr[i], 1);

        if (firstIdx != -1) { 
            int cnt = cols - firstIdx;
            if (cnt > maxCnt) {
                maxCnt = cnt;
                index = i;
            }
        }
    }

    return index;
}

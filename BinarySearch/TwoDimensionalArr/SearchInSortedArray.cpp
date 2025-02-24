#include<bits/stdc++.h>
using namespace std;

bool isExists(vector<vector<int>> &arr , int target) {
    int low = 0;
    int n = arr.size();
    int m =  arr[0].size();
    int high = (n*m - 1);

    while (low <= high) {
        int mid = (low + high) /2;
        int row = mid/m;
        int col = mid%m;
        if (arr[row][col] == target) return true;
        else if (arr[row][col] < target) low = mid - 1;
        else high = mid - 1;
    }
    return false;
}
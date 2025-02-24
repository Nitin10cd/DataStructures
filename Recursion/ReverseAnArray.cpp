#include<bits/stdc++.h>
using namespace std;

void ReverseArray (vector<int> &arr, int left, int size) {
    // edge case
    if (left >= size/2)return;
    swap(arr[left],arr[size-left-1]);
    ReverseArray(arr,left+1,size);
}

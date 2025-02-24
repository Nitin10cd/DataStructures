#include<bits/stdc++.h>
using namespace std;

void getSumCombo (int index, int sum , vector<int> &arr, int N, vector<int> &sumSubset) {
    if (index == N) {
        sumSubset.push_back(sum);
        return;
    }

    // pick element
    getSumCombo(index+1 , sum+arr[index], arr,N,sumSubset);
    // dont pick
    getSumCombo(index+1,sum,arr,N,sumSubset);
}

vector<int> subsetSums(vector<int>& arr , int N) {
    // code here
    vector<int> sumSubset;
    getSumCombo(0,0,arr,N,sumSubset);
    return sumSubset;
}
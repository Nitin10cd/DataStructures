#include<bits/stdc++.h>
using namespace std;

void findSubsetSum (int index , int sum , vector<int> &arr, vector<int> &ans) {
    if (index == arr.size()) {
        ans.push_back(sum);
        return;
    }

    // pick 
    findSubsetSum(index+1,sum+arr[index], arr, ans);
    // not pick
    findSubsetSum(index+1,sum,arr,ans);
}

vector<int> subsetSums(vector<int>& arr) {
    vector<int> ans;
    FindSubsetSum(0,0,arr,ans);
    return ans;
 }

#include<bits/stdc++.h>
using namespace std;

void FindCombinationSum(int index , int target , vector<int> &arr, vector<vector<int>> &ans , vector<int> &ds) {
    // base case
    if (target == 0) {
        ans.push_back(ds);
        return;
    }

    // for continuosly picking the unique 
    for (int i = index; i < arr.size(); i++){
        if (i > index && arr[i] == arr[i-1]) continue;
        if (arr[i] > target) break;
        ds.push_back(arr[i]);
        FindCombinationSum(i+1,target - arr[i], arr, ans ,ds);
        ds.pop_back();
    }
}

vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    sort(candidates.begin() , candidates.end());
    vector<vector<int>> ans;
    vector<int> ds;
    FindCombinationSum(0,target,candidates,ans,ds);
    return ans;
}
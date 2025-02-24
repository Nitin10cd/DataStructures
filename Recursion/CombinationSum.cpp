#include<bits/stdc++.h>
using namespace std;

void findCombinationSum (int index , int target , vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds){

    // checking the base case if the index reaches the end
    if (index == arr.size()){
        if (target == 0) {
            ans.push_back(ds);
            return;
        }
    }

    // picking 
if (arr[index] <= target) {
    ds.push_back(arr[index]);
    // repetition allowed so again call for the same index
    findCombinationSum(index, target - arr[index], arr, ans,ds);
    ds.pop_back();
}
    // non picking 
    findCombinationSum(index+1, target, arr,ans,ds);
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> ans;
    vector<int> ds;
    findCombinationSum(0,target,candidates,ans,ds);
    return ans;
}
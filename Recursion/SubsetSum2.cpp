#include<bits/stdc++.h>
using namespace std;

void findSubsetWithoutDups (int index, vector<int> &nums, vector<int> &ds, vector<vector<int>> &ans) {
    ans.push_back(ds);

    // picking up logic
    for (int i = index; i < nums.size(); i++){
        if (i!= index && nums[i] == nums[i-1]) continue;
        ds.push_back(nums[i]);
        findSubsetWithoutDups(i + 1, nums,ds,ans);
        ds.pop_back();
    }
}

vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    vector<vector<int>> ans;
    vector<int> ds;
    sort(nums.begin(), nums.end());
    findSubsetWithoutDups(0,nums,ds,ans);
    return ans;
}
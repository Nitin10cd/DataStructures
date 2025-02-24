#include<bits/stdc++.h>
using namespace std;

void ProduceSubset(int index , vector<int> &nums , vector<vector<int>> &ans, vector<int> &ds) {
    if (index == nums.size()) {
        ans.push_back(ds);
        return;
    }

    // include 
    ds.push_back(nums[index]);
    ProduceSubset(index+1,nums,ans,ds);
    ds.pop_back();

    // exclude
    ProduceSubset(index+1,nums,ans,ds);
}

vector<vector<int>> subsets(vector<int>& nums) {
    vector<int> ds;
    vector<vector<int>> ans;
    ProduceSubset(0, nums, ans, ds);
    return ans;
}
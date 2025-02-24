#include<bits/stdc++.h>
using namespace std;

void recurrPermute(int index , vector<int> &ds , vector<vector<int>> &ans) {
    if (index == ds.size()) {
        ans.push_back(ds);
        return;
    }

    for (int i = index; i < ds.size(); i++) {
        swap(ds[index],ds[i]);
        recurrPermute(index+1,ds,ans);
        swap(ds[index],ds[i]);
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    recurrPermute(0,nums,ans);
    return ans;
}

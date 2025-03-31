#include<bits/stdc++.h>
using namespace std;

/*
we have two  vectors : mapping = {8,9,4,0,2,1,3,5,7,6} nums = {991,338,38} we have to sort the value on the bases of the values in mapping arr
    in every no in a nums vector each bit act as a index of mapping array we have to place that value from the value stored at the that bit index in the mapping Arr then sort 
*/

// approch 1: using extra space
// string getMappedNum(string &num , vector<int> &mapping) {
//     string mappedNum = "";
//     for (int i = 0; i < num.length(); i++) {
//         char ch = num[i];
//         int intCh = ch - '0';
//         mappedNum+= to_string(mapping[intCh]);
//     }
//     return mappedNum;
// }

// vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
//     // approch 1 : using pair for the soln
//     int n = nums.size();
//     vector<pair<int ,int>> vec;

//     for (int i = 0; i < n; i++) {
//         string numStr = to_string(nums[i]);
//         string mappedStr = getMappedNum(numStr,mapping);
//         int mappedNum = stoi(mappedStr);
//         vec.push_back({mappedNum,i});
//     }
//     sort(vec.begin(), vec.end());
//     vector<int> result;
//     for (auto &p : vec) {
//         int originalNumIdx = p.second;
//         result.push_back(nums[originalNumIdx]);
//     }
//     return result;
// }

// approch 2: using maths 
int getMappedNum(int num , vector<int> &mapping) {
    if (num < 10) {
        return mapping[num];
    }
    int mappedNum = 0;
    int placeValue = 1;
    while(num) {
        int lastDigit = num%10;
        int mappedDigit = mapping[lastDigit];

        placeValue*= 10;
        num/= 10;
    }

    return mappedNum;
}

vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
    // approch 1 : using pair for the soln
    int n = nums.size();
    vector<pair<int ,int>> vec;

    for (int i = 0; i < n; i++) {
        int mappedNum = getMappedNum(nums[i],mapping);
        vec.push_back({mappedNum,i});
    }
    sort(vec.begin(), vec.end());
    vector<int> result;
    for (auto &p : vec) {
        int originalNumIdx = p.second;
        result.push_back(nums[originalNumIdx]);
    }
    return result;
}
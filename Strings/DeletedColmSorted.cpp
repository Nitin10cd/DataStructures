#include<bits/stdc++.h>
using namespace std;
int minDeletionSize(vector<string>& strs) {
    int delCnt = 0;
    int rows = strs.size();
    int cols = strs[0].size();

    for (int i = 0; i < cols; i++) {
        for (int j = 1; j < rows; j++) {
            if (strs[j][i] < strs[j-1][i]) {
                delCnt++;
                break; 
            }
        }
    }
    return delCnt;
}
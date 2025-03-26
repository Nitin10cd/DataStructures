#include<bits/stdc++.h>
using namespace std;

int numberOfBeams(vector<string>& bank) {
    int prevDeviceCnt = 0, result = 0;

    for (string& row : bank) {
        int currDeviceCnt = count(row.begin(), row.end(), '1');

        if (currDeviceCnt > 0) {
            result += prevDeviceCnt * currDeviceCnt;
            prevDeviceCnt = currDeviceCnt;
        }
    }

    return result;
}
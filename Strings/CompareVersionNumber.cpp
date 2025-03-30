#include<bits/stdc++.h>
using namespace std;

// problem : we have given two  version strings we have to match if the versions are same then we have to return the 0  
// version1 = "1.002.3" vesion2 = "1.2.03"
// approch 1 : break the strings on th ebases of delimeter 

// get tokens : breaking the string on the bases of the delimeter 

vector<string> getToken(string version) {
    stringstream ss(version);
    string token;
    vector<string> tokens;

    while (getline(ss, token, '.')) {
        tokens.push_back(token);
    }
    return tokens;
}

int compareVersion(string version1, string version2) {
    vector<string> v1 = getToken(version1);
    vector<string> v2 = getToken(version2);

    int m = v1.size();
    int n = v2.size();
    int i = 0;

    while (i < m || i < n) {
        int a = (i < m) ? stoi(v1[i]) : 0;  // Convert string to integer
        int b = (i < n) ? stoi(v2[i]) : 0;

        if (a < b) return -1;
        if (a > b) return 1;
        i++;
    }
    return 0;
}
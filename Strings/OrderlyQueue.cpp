#include<bits/stdc++.h>
using namespace std;

string orderlyQueue(string s, int k) {

    // if we have string in which k > 1 we can simply sort cuz sorted is always lexographical
    if (k > 1) {
        sort(begin(s), end(s));
        return s;
    } 

    // if not k > 1 then we have to take every element one by one
    string result = s;
    int n = s.length();
    for (int i = 0; i <= n-1; i++) {
        string temp = s.substr(i) + s.substr(0,i);
        result = min(result,temp);
    }

    return result;
}
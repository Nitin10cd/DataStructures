#include<bits/stdc++.h>
using namespace std;

int strStr(string haystack, string needle) {
    for(int i = 0; i < haystack.size(); i++) {
        for (int j = 0; j < needle.size(); j++) {
            if (haystack[i+j] != needle[j]) break;
            if (j == needle.size()-1) return i;
        }
    }

    return -1;
}
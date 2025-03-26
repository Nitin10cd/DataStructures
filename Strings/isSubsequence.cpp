#include <bits/stdc++.h>
using namespace std;

bool isSubsequence(string s, string t) {
     int slen = s.length();
     int tLen = t.length();

     int i = 0;
     int j = 0;
     while (i < slen && j < tLen) {
        if (s[i] == t[j]) {
            i++;
        }
        j++;
     }

     return i == slen;
}
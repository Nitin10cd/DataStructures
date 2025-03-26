#include<bits/stdc++.h>
using namespace std;

string reverseWords(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != ' ') {
            int j = i;
            while (j < s.size() && s[j] != ' ') {
             j++;
            }
            reverse(begin(s)+i, begin(s)+j);
            i = j;
        }
    }
    return s;
}
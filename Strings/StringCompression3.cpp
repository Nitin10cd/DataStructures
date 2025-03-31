#include<bits/stdc++.h>
using namespace std;

string compressedString(string word) {
    int n = word.length();
    string compression = "";
    int i = 0;

    while(i < n) {
        int cnt = 0;
        char ch = word[i];

        while(cnt < 9 &&  i < n && word[i] == ch) {
            i++;
            cnt++;
        }

        compression+= to_string(cnt) + ch;
    }
    return compression;
}
#include<bits/stdc++.h>
using namespace std;

bool Allcapital (string s) {
    for (char &ch : s) {
        if (ch < 'A' ||  ch > 'Z') return false;
    }
    return true;
}

bool allSmall (string s) {
    for (char &ch : s) {
        if (ch < 'a' ||  ch > 'z') return false;
    }
    return true;
}

bool detectCapitalUse(string word) {
    if (Allcapital(word) || allSmall(word) || allSmall(word.substr(1))) return true;
    return false;
}
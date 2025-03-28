#include<bits/stdc++.h>
using namespace std;

bool isVowel(char ch) {
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}

int beautifulSubstrings(string s, int k) {
    unordered_map<int, int> prefixCount;
    prefixCount[0] = 1;

    int balance = 0, result = 0, modK = 2 * k;

    for (char ch : s) {
        balance += isVowel(ch) ? 1 : -1;
        int modValue = (balance % modK + modK) % modK;
        result += prefixCount[modValue];
        prefixCount[modValue]++;
    }

    return result;
}
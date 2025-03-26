#include <bits/stdc++.h>
using namespace std;

bool isVowel(char ch) {
    ch = tolower(ch); 
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

bool halvesAreAlike(string s) {
    int n = s.size();
    int mid = n / 2;

    int countL = 0, countR = 0;

    for (int i = 0; i < mid; i++) {
        if (isVowel(s[i])) countL++;
        if (isVowel(s[i + mid])) countR++; 
    }

    return countL == countR;
}
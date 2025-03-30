#include<bits/stdc++.h>
using namespace std;

// problem : we have string we have to find the all the substring made using that given char
// approch 1 : if we use the methood like generating all the string then work it 
// approch 2 : using combination 

long long countSubstrings(string s, char c) {
    // approch 1: 
    long long count = 0;
    long long substring = 0;

    for (char &ch : s) {
        if (ch == c) {
            substring += (1 + count);
            count++;
        }
    }
    return substring;
}
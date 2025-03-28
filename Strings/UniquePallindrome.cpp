#include<bits/stdc++.h>
using namespace std;

int countPalindromicSubsequence(string s) {
    int n = s.length();
    int result = 0;

    for (char ch = 'a'; ch <= 'z'; ch++) {
        int left = -1, right = -1;

        for (int i = 0; i < n; i++) {
            if (s[i] == ch) {
                if (left == -1) left = i;  
                right = i;                 
            }
        }

        if (left != -1 && right != -1 && left < right) {
            unordered_set<char> middleChars;
            for (int i = left + 1; i < right; i++) {
                middleChars.insert(s[i]);  
            }
            result += middleChars.size();
        }
    }

    return result;
}

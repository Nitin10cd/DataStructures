#include<bits/stdc++.h>
using namespace std;

using namespace std;

bool closeStrings(string word1, string word2) {
    if (word1.size() != word2.size()) return false;

    vector<int> freq1(26, 0), freq2(26, 0);
    unordered_set<char> set1, set2;

    // Counting frequency of characters and storing unique characters
    for (char ch : word1) {
        freq1[ch - 'a']++;
        set1.insert(ch);
    }
    for (char ch : word2) {
        freq2[ch - 'a']++;
        set2.insert(ch);
    }

    // Both words must contain the same unique characters
    if (set1 != set2) return false;

    // Sort frequency counts
    sort(freq1.begin(), freq1.end());
    sort(freq2.begin(), freq2.end());

    return freq1 == freq2;
}

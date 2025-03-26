#include<bits/stdc++.h>
using namespace std;

// i/p = ["cat", 'dog], "catdog"]
// o/p = ["catdog"]
// we have to return the vector of the string contain words which is make by concatinating otherwords in a i/p vector of strings

bool isConcatenated(string word, unordered_set<string> &st, unordered_map<string, bool> &memo) {
    if (memo.find(word) != memo.end()) return memo[word]; 
    int l = word.length();
    
    for (int i = 0; i < l - 1; i++) {
        string prefix = word.substr(0, i + 1);
        string suffix = word.substr(i + 1);

        if (st.find(prefix) != st.end() && 
            (st.find(suffix) != st.end() || isConcatenated(suffix, st, memo))) {
            return memo[word] = true;
        }
    }

    return memo[word] = false;
}

vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
    unordered_set<string> st(words.begin(), words.end());
    vector<string> result;
    unordered_map<string, bool> memo;

    for (string word : words) {
        st.erase(word); 
        if (isConcatenated(word, st, memo)) {
            result.push_back(word);
        }
        st.insert(word); 
    }

    return result;
}
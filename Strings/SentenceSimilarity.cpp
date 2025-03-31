#include<bits/stdc++.h>
using namespace std;
/*
You are given two strings sentence1 and sentence2, each representing a sentence composed of words. A sentence is a list of words that are separated by a single space with no leading or trailing spaces. Each word consists of only uppercase and lowercase English characters.
Two sentences s1 and s2 are considered similar if it is possible to insert an arbitrary sentence (possibly empty) inside one of these sentences such that the two sentences become equal. Note that the inserted sentence must be separated from existing words by spaces.
*/ 
bool areSentencesSimilar(string sentence1, string sentence2) {
    vector<string> vec1, vec2;
    stringstream ss1(sentence1), ss2(sentence2);
    string token;

    while (ss1 >> token) vec1.push_back(token);
    while (ss2 >> token) vec2.push_back(token);

    if (vec1.size() < vec2.size()) swap(vec1, vec2);

    int i = 0, j = vec1.size() - 1;
    int k = 0, l = vec2.size() - 1;

    while (k < vec2.size() && vec2[k] == vec1[i]) {
        k++;
        i++;
    }

    while (l >= k && vec2[l] == vec1[j]) {
        j--;
        l--;
    }

    return l < k;
}
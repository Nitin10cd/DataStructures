#include<bits/stdc++.h>
using namespace std;

// problem we have 2 strings and we have to make the one string as the anangram of other one
/*
    suppose : S = "leetcode" T = "practice"
    step : 1 =>  count the no of each letter occurance in both string seperately
    step : 2 => if(countOf(char in T) >= countOf(char in S)) koi problem hi nhi otherwise flipping occurs
                else how many time flip = countOf(char in S) - countOf(char in S)
    step : 3 => return total (total is all the value of the else condition )         
 */
int minSteps(string s, string t) {
    // vector<int> frequencyOfAllInS;
    // vector<int> frequencyOfAllInT;
    // instead of two different vectors we can use the one vector which stores difference only
    
    int sizeOfS = s.length();
    int sizeOfT = t.length();
    vector<int> difference(26,0);

    for(int i = 0; i < sizeOfS; i++) {
        difference[s[i] - 'a']++;
        difference[t[i] - 'a']--;
    }
    int result = 0;
    for (int i = 0; i < 26; i++) {
        if (difference[i] > 0) {
            result+=difference[i];
        }
    }

    return result;
}

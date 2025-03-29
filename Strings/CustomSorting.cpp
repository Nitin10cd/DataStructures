#include<bits/stdc++.h>
using namespace std;

/*
    Problem : we have order and the string we have to  place the characters of sring in such a way they follow order 
    order = "cba" s = "abcd"

    approch : 1 => simply ek new string me order wise match karke s ki values ko append karna hai (not good at all)
    approch : 2 => marking index values in the s character based on order
                   writing our own comparator  (sorter) for this sorting we using lambda expression
 */

// using approch 1 (not applicable time complexity is high)
// string customSortString(string order, string s) {
//       int count[26];
//       for (char &ch : s) {
//             count[ch - 'a']++;
//       }  
//       string result = "";
//       for (char &ch : order) {
//         while (count[ch- 'a'] > 0) {
//             result.push_back(ch);
//             count[ch - 'a'];
//         }
//       }

//       for (char &ch : s) {
//         if (count[ch - 'a'] > 0) {
//             result.push_back(ch);
//         }
//       }

//       return result;
// }
string customSortString(string order, string s) {
    vector<int> index(26, -1);

    for (int i = 0; i < order.length(); i++) {
        char ch = order[i];
        index[ch - 'a'] = i;
    }

    auto myComparator = [&index](char ch1, char ch2) {
        return index[ch1 - 'a'] < index[ch2 - 'a'];
    };

    sort(s.begin(), s.end(), myComparator);
    return s;
}

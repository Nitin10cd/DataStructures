#include<bits/stdc++.h>
using namespace std;

bool checkIfPangram(string sentence) {
    // take array and assign it 0
    vector<int> arr(26,0);
    for (char &ch : sentence) {
        int index = ch - 'a';
        arr[index]++;
    }

    for (int &count: arr) {
        if (count == 0) {
            return false;
        }
    }

    return true;
}
#include<bits/stdc++.h>
using namespace std;

string getPermutation(int n, int k) {
    int fact = 1;
    vector<int> numbers;

    for (int i = 1; i < n; i++) {
        fact *= i;
        numbers.push_back(i);
    }
    numbers.push_back(n);

    string ans = "";
    k--; 

    while (!numbers.empty()) {
        int index = k / fact;
        ans += to_string(numbers[index]);
        numbers.erase(numbers.begin() + index);

        if (!numbers.empty()) {
            k %= fact;
            fact /= numbers.size();
        }
    }
    return ans;
}
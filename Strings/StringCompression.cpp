#include<bits/stdc++.h>
using namespace std;

int compress(vector<char>& chars) {
    int n = chars.size();

    int index = 0;
    int i = 0;

    while( i < n) {
        char curr_char = chars[i];
        int count  = 0;
        
        // finding the count of the chars 
        while (i < n && chars[i] == curr_char) {
            count++;
            i++;
        }

        // assignig the values
        chars[index] = curr_char;
        index++;
        // if the count is of multiple digit
        if (count > 1) {
            string count_str = to_string(count);
            for (char &ch : count_str) {
                chars[index] = ch;
                index++;
            }
        }
    }

    return index;
}
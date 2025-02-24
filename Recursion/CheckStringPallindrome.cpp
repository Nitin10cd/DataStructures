#include<bits/stdc++.h>
using namespace std;

bool isPallindrome( string str, int index) {
    if (index >= str.size()/2) return true;
    if (str[index] != str[str.size()-index-1]) return false;
    return isPallindrome(str,index+1);
}
#include<bits/stdc++.h>
using namespace std;

string countAndSay(int n) {
   if (n == 1) return "1";
    
   // calling or the past call records
   string say = countAndSay(n-1);

   // processing the count
   string result = "";
   for (int i = 0; i < say.size(); i++) {
    char ch = say[i];
    int count = 1;
    while (i < say.size() && say[i] == say[i+1]) {
        count++;
        i++;
    }
    result+= to_string(count) + string(1,ch);
   }

   return result;
}
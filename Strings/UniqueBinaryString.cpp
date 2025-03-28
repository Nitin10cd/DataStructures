#include<bits/stdc++.h>
using namespace std;

// we use approch 3 : optimal
string findDifferentBinaryString(vector<string>& nums) {
   int n = nums.size();
   
   string result;
   for (int i = 0; i < n; i++) {
    char ch = nums[i][i];
    result += (ch == '0') ? "1" : "0";
   }

  return result;
}

// approch 1 : prepareing the set of decimal values o binary no then run a loop
// for loop check from zeros runned through the maximum vakue of nbits means : if n = 3
// nos are = 2 pow 3 - 1 is the maximum value
// optimisation agr pure max element tak check na karke only n nos till uske tak dekhenge 


// approch 2: brute force like generate all substring then match which is not suicient 

// approch 3: making reult string and then just put opposite value 
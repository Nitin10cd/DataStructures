#include<bits/stdc++.h>
using namespace std;
/**
Given a string expression representing an expression of fraction addition and subtraction, return the calculation result in string format.
The final result should be an irreducible fraction. If your final result is an integer, change it to the format of a fraction that has a denominator 1. So in this case, 2 should be converted to 2/1.
Example 1:
Input: expression = "-1/2+1/2"
Output: "0/1"
 */
string fractionAddition(string expression) {
    istringstream ss(expression);
    int num = 0, den = 1, a, b;
    char slash, sign;
    
    while (ss >> a >> slash >> b) { 
        num = num * b + a * den;   
        den *= b;                   
        int gcd = abs(__gcd(num, den)); 
        num /= gcd;
        den /= gcd;
    }
    
    return to_string(num) + "/" + to_string(den);
}
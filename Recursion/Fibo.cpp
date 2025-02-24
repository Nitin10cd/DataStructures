#include<bits/stdc++.h>
using namespace std;

int fibonacci (int num) {
    if (num <= 1) return num;
    int last = fibonacci(num - 1);
    int sLast = fibonacci(num - 2);
    return last + sLast;
}


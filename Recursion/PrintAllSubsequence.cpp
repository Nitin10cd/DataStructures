#include<bits/stdc++.h>
using namespace std;

void PrintSubSequences(int index , vector<int> &ds , int arr[] , int n) {
    if (index == n) {
        for (auto it: ds) {
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }

    // taking the subsequence 
    ds.push_back(arr[index]);
    PrintSubSequences(index + 1, ds , arr , n);
    ds.pop_back();

    // for not picking the sequence
    PrintSubSequences(index+1,ds,arr,n);
}

// int main () {
//     int arr[] = {3,2,1};
//     int n = 3;
//     vector<int> ds;
//     PrintSubSequences(0,ds,arr,n);
//     return 0;
// }
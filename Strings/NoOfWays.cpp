#include<bits/stdc++.h>
using namespace std;

// in a room we have plants and seats we have to place the divider but divider in such a way that har part me atleast 2 seats hon , plants kitne bhi
// corridor : "SSPPSPS" o/p : 3
// approch :  SS | PPSPS , SSPP| SPS , SSP | PSPS THREE ANSWERS
/*  step : 1 =>  checking total no of seats must be even if not the not possible to divide
    step  : 2 => possible ways find karne hain divider lagane ke simply like dekho jahan bhi 
                2 s cover hi jaye vahan se divider laga ke dekho or jahan jahan se divider lag sake vahan ke counts ko 
                apas me multiply thats it... 
    step : 3 => mark the indecies of the seats 
                suppose corridor : "SPSPPSPPSPPSS"
                    indexes : [0,2,5,8,11,12] // of seats
                    iterate through this array i+=2 means 2 times badhao
                    prev-index = 2  current-index = 5
                    total *= indexes[prev-index] - indexes[current-index] 
    step : 4 => return total;
 */


 int M = 1e9+7;
    
    int numberOfWays(string corridor) {
        vector<int> seats_idx;
        int n = corridor.length();

        for (int i = 0; i < n; i++) {
            if (corridor[i] == 'S') {
                seats_idx.push_back(i);
            }
        }

        if (seats_idx.size() % 2 != 0) return 0;
        if (seats_idx.size() == 0) return 0; 
        if (seats_idx.size() == 2) return 1; 
        long long result = 1;
        int end_idx_prev_val = seats_idx[1];

       
        for (int i = 2; i < seats_idx.size(); i += 2) {
            int length = seats_idx[i] - end_idx_prev_val;
            result = (result * length) % M;
            end_idx_prev_val = seats_idx[i+1];
        }

        return result;
    }
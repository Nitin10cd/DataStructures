#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size(); 

        int low = 0, high = m - 1; 

        while (low <= high) {
            int mid = (low + high) / 2;
            int maxRow = 0;
            for (int i = 0; i < n; i++) {
                if (mat[i][mid] > mat[maxRow][mid]) {
                    maxRow = i;
                }
            }
            bool leftIsSmaller = (mid == 0) || (mat[maxRow][mid] > mat[maxRow][mid - 1]);
            bool rightIsSmaller = (mid == m - 1) || (mat[maxRow][mid] > mat[maxRow][mid + 1]);

            if (leftIsSmaller && rightIsSmaller) {
                return {maxRow, mid};
            } else if (mid > 0 && mat[maxRow][mid - 1] > mat[maxRow][mid]) {
                high = mid - 1; 
            } else {
                low = mid + 1;
            }
        }

        return {-1, -1}; 
    }
};

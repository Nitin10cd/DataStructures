#include <bits/stdc++.h>
using namespace std;

bool isSafe(int node, vector<int>& color, vector<vector<int>>& graph, int n, int col) {
    for (int k = 0; k < n; k++) {
        if (graph[node][k] == 1 && color[k] == col) {
            return false;
        }
    }
    return true;
}

bool solve(int node, vector<int>& color, int m, int N, vector<vector<int>>& graph) {
    if (node == N) return true;
    
    for (int i = 1; i <= m; i++) {
        if (isSafe(node, color, graph, N, i)) {
            color[node] = i;
            if (solve(node + 1, color, m, N, graph)) return true;
            color[node] = 0;  // Backtrack
        }
    }
    
    return false;
}

bool graphColoring(int v, vector<pair<int, int>>& edges, int m) {
    vector<vector<int>> graph(v, vector<int>(v, 0));
    
 
    for (auto& edge : edges) {
        int u = edge.first, v = edge.second;
        graph[u][v] = 1;
        graph[v][u] = 1;
    }

    vector<int> color(v, 0);
    return solve(0, color, m, v, graph);
}

// int main() {
//     int v = 4, m = 3;
//     vector<pair<int, int>> edges = {{0, 1}, {0, 2}, {1, 2}, {1, 3}};
    
//     if (graphColoring(v, edges, m))
//         cout << "Graph can be colored with " << m << " colors.\n";
//     else
//         cout << "Graph cannot be colored with " << m << " colors.\n";
    
//     return 0;
// }

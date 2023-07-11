#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;
typedef vector<int>vi;
typedef pair <int, int> pi;



void dfs (int s , vector<bool>visited, vector<int>adj[]) {
    if(visited[s]) {
        
    }
    visited[s] = true;
    for(auto u: adj[s]) {
        dfs(u, visited, adj);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> adj[n+1];
        vector<bool>visited[n+1];
        for(int i=0; i<n; i++) {
            int x1, y1;
            cin >> x1 >> y1;
            adj[x1].push_back(y1);
        }

        
    }


    return 0;
}
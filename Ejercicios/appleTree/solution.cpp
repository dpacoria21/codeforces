#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;
typedef vector<int>vi;
typedef pair <int, int> pi;

vector<vector<ll>>adj;
vector<ll>counts;

void dfs(ll curr, ll prev) {
    if(adj[curr].size()==1 && adj[curr][0] == prev){
        counts[curr] = 1;
    }else {
        for(auto u: adj[curr]) {
            if(u!=prev) {
                dfs(u, curr);
                counts[curr] += counts[u];
            }
        }
    }
}

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        adj.assign(n, vector<ll>());
        counts.assign(n, 0);
        for(int i=0; i<n-1; i++) {
            ll x, y;
            cin >> x >> y;
            x--; y--;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        
        dfs(0, -1);
        
        ll q; cin >> q;

        for(int i=0; i<q; i++) {
            ll a, b;
            cin >> a >> b;
            cout << counts[a-1]*counts[b-1] << "\n";
        }
    }
    return 0;
}
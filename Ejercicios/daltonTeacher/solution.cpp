#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;
typedef vector<int>vi;
typedef pair <int, int> pi;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        ll count = 0;
        for(int i=1; i<n+1; i++) {
            int aux; cin >> aux;
            if(aux==i) {
                count++;
            }
        }
        cout << (ll)(ceil((double)(count)/2)) << "\n";
    }
    return 0;
}
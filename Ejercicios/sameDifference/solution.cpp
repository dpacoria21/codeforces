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
    map<int, int>lng;
    while(t--) {
        int n; cin >> n;
        map<int, int>lng;
        ll res = 0;
        for(int i=1; i<=n; i++) {
            int aux; cin >> aux;
            aux-=i;
            res += lng[aux];
            if(lng[aux] == 0) {
                lng[aux] = 1;
            }else {
                lng[aux]++;
            }
        }
        cout << res << "\n";
    }
    return 0;
}
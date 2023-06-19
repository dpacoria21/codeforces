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
    ll t; cin >> t;
    while(t--) {
        ll x, y;
        cin >> x >> y;
        ll a, b;
        cin >> a >> b;

        ll res1 = b*min(x, y);
        res1 += a*(x-min(x,y) + y-min(x, y));

        ll res2 = (x+y)*a;

        ll res3 = LLONG_MAX;
        
        if(x == y) {
            res3 = (x+y)*b;
        }

        cout << min(res1, min(res2, res3)) << "\n";
    }
    return 0;
}
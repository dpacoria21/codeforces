#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        ll n, k;
        cin >> n >> k;
        ll i=0;
        ll res = 0;
        while(k*i<n) {
            i++;
        }
        cout << k*i-n << "\n";
    }
    return 0;
}

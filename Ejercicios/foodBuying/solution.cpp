#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        double n; cin >> n;
        ll total = n;
        while(n>=10) {
            ll a = float(n/10);
            total += a;
            n = n - a*10 + a; 
        }
        cout << total << "\n";
    }
    return 0;
}
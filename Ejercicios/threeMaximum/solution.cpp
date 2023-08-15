#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        ll x, y, z;
        cin >> x >> y >> z;
        if(x==y && x>z || y==z && z>x || x==z && z>y) {
            cout << "YES\n";
            cout << min(x, min(y, z)) << " " << min(x, min(y, z)) << " " << max(x, max(y, z)) << "\n";
        }else if(x==y && x==z) {
            cout << "YES\n";
            cout << x << " " << x << " " << x << "\n";
        }else {
            cout << "NO\n";
        }

    }
    return 0;
}
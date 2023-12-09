#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int a, b, l, n;
        cin >> a >> b >> l >> n;
        ll res = (n*2-1)*a + (n-1)*2*b + 2*l;
        cout << res << "\n";
    }
    return 0;
}

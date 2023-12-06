#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        ll a, b, c;
        cin >> a >> b >> c;
        ll resD = a*c + (b*c)/100;
        ll resC = (b*c)%100;
        cout << resD << " " << resC << "\n";
    }
    return 0;
}

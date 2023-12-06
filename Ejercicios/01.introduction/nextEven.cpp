#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        cout << ((n%2==0) ? n+2 : n+1) << "\n";
    }
    return 0;
}

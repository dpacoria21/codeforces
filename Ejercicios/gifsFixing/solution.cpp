#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <string>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int c[n];
        int o[n];
        int minC = INT_MAX;
        int minO = INT_MAX;
        for(int i=0; i<n; i++){
            cin >> c[i];
            minC = min(minC, c[i]);
        }
        for(int i=0; i<n; i++){
            cin >> o[i];
            minO = min(minO, o[i]);
        }

        ll res = 0;

        for(int i=0; i<n; i++) {
            int mov = max(c[i]-minC, o[i]-minO);
            res+= mov>0 ? mov : 0;
        }

        cout << res << "\n";

    }
    return 0;
}
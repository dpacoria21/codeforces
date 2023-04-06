#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <string>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        if( (n/2)%2 != 0) {
            cout << "NO" << endl;
        }else {
            cout << "YES" << endl;
            ll count = 0;
            for(int i=0; i<n/2; i++) {
                cout << 2*(i+1) << " ";
                count += 2*(i+1);
            }

            for(int i=0; i<(n/2 - 1); i++) {
                cout << 1+(i*2) << " ";
                count -= 1+(i*2);
            }

            cout << count << endl;

        }

    }
    return 0;
}
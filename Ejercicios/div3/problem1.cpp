#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <string>
#include <list>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    ll t; cin >> t;
    while(t--) {
        ll n, d;
        cin >> n >> d;
        string s;
        cin >> s;
        ll index = 0;
        bool flag = false;
        for(ll i=0; i<n; i++) {
            ll aux = s[i] - '0';
            if ( d > aux ) {
                flag = true;
                index = i;
                break;
            }
        }

        if( flag ) {
            string start = s.substr(0, index);
            string aux = s.substr(index, n);
            start += to_string(d);
            cout << start << aux << endl;
        }else {
            s += to_string(d);
            cout << s << endl;
        }

    }
    return 0;
}
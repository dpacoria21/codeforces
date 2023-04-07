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
    ll leg = 1;
    while(t--) {
        ll a, b;
        ll count = 0;
        cin >> a >> b;
        ll total = a+b;
        if(total%2==0) {
            if(total == 2) {
                cout << 2 << endl;
                continue;
            }
            ll min = total;
            ll res = 1;
            for(ll i=2; i<=total; i++) {
                if(total%i!=0) continue;
                res += (i-res);
                res += (total/i);
                if(res < min) {
                    min = res;
                }
                res = 1;
            }
            cout << min-1 << endl;
        }else {
            total--;
            if(total == 2) {
                cout << 2 << endl;
                continue;
            }
            ll min = total;
            ll res = 1;
            for(ll i=2; i<=total; i++) {
                if(total%i!=0) continue;
                res += (i-res);
                res += (total/i);
                if(res < min) {
                    min = res;
                }
                res = 1;
            }
            cout << min << endl;
        }
    }

    return 0;
}
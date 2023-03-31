#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <string>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    ll t, n;
    cin >> t;
    for(ll i = 0; i<t; i++) {
        cin >> n;
        if(n <= 2) {
            cout << 0 << endl;
            continue;
        }
        ll res = floor(n/2);
        if(n%2==0){
            cout << res-1 << endl;
        }else {
            cout << res << endl;
        } 
    }
    return 0;
}
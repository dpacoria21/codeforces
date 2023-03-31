#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <string>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    ll n, a;
    ll active = 0;
    cin >> n;
    ll count = 0;
    for(ll i = 0; i<n; i++) {
        cin >> a;
        if(a>0) {
            active += a;
            continue;
        }else if(a < 0 && active == 0 ) {
            count++;
        }else {
            active += a;
        }
    }
    cout << count;
    return 0;
}
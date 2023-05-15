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
        ll n; cin >> n;
        ll x = 1;
        ll sq = 2;
        ll count = 0;
        while(x < n) {
            x+=sq;
            sq*=2;
            count++;
            if(n%x == 0) {
                break;
            }
        }
        cout << n/x << "\n";
    }
    return 0;
}
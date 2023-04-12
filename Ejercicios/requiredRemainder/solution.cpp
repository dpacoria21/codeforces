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
        ll x, y, n, k;
        cin >> x >> y >> n;
        
        ll dif = n%x;
        if(dif == y) {
            dif = 0;
        }
        else if(dif>y) {
            dif = dif-y;
        }else{
            dif += (x-y);
        }         
        cout << n-dif << endl;
        
    }

    return 0;
}
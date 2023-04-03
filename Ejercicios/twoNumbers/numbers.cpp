#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <string>

using ll = long long;
using ld = long double;
using namespace std;

int main() { 
    ll t, a, b;
    cin >> t;
    for(ll i=0; i<t; i++) {
        cin >> a >> b;
        ll rest = max(a,b)-min(a,b);
        ll cant = rest/10;
        rest = rest%10;
        if(rest == 0) {
            cout << cant <<endl;
        }else {
            cout << cant+1 << endl;
        }
    }

    return 0;
}

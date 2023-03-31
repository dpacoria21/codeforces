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
        ll n2 = n;
        ll j=0, count = 0;
        while(n != 0) {
            ll aux = n%(10*(j+1));
            if(aux != 0) {
                n = n-(aux*pow(10,j));
                count++;
                n/=10;
            }else {
                n/=10;
            }
        }
        cout << count << endl;
        j = 0;
        ll ceros = 0;
        while( n2!=0 ) {
            ll aux = n2%(10*(j+1));
            if(aux != 0) {
                n2 = n2-(aux*pow(10,j));
                count++;
                n2/=10;
                cout << aux*pow(10,ceros) << " ";
                ceros++;
            }else {
                n2/=10;
                ceros++;
            }
        }
        cout << endl;
    }

    return 0;
}
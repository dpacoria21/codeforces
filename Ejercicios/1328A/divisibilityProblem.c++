#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <string>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    ll n, a, b;
    cin >> n;
    for(ll i=0; i<n; i++) {
        cin >> a >> b;
        if(a <= b) {
            cout << (b-a) << endl;
        }else if (a%b==0) {
            cout << a%b << endl;
        }else {
            cout << b-(a%b) << endl;    
        }
    }
    return 0;
}
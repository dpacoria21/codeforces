#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <string>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    ll k,l,m,n,d;
    ll count = 0;
    cin >> k;
    cin >> l;
    cin >> m;
    cin >> n;
    cin >> d;
    for(ll i=1; i<=d; i++) {
        if(i%k==0 || i%l==0 || i%m==0 || i%n==0) {
            count++;
        }
    }
    cout << count;
    return 0;
}
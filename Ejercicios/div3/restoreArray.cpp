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
        ll n; cin >> n;
        ll arr[n-1];
        bool flag = true;
        ll min = INT_MAX;
        for(ll i=0; i<n-1; i++) {
            cin >> arr[i];
        }

        ll res[n];
        res[0] = arr[0];

        for(ll i=0; i<n-1; i++) {
            if(arr[i] >= res[i]) {
                res[i+1] = arr[i];   
            }else {
                res[i] = res[i+1] = arr[i];
            }
        }

        for(ll a: res) {
            cout << a << " ";
        }

        cout << endl;

    }
    return 0;
}
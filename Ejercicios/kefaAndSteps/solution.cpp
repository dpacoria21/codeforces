#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <math.h>
#include <iomanip>
#include <string>
#include <algorithm>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    ll n; cin >> n;
    ll arr[n];
    for(ll i=0; i<n; i++) {
        cin >> arr[i];
    }

    ll aux = arr[0];
    ll count = 1;

    vector<ll>res;
    ll save = 1;

    for(ll i=1; i<n; i++) {
        if(aux <= arr[i]) {
            count++;
        }else {
            // res.push_back(count);
            save = max(save, count);
            count = 1;
        }
        aux = arr[i];
    }

    save = max(save, count);

    cout << save;

    // res.push_back(count);

    // sort(res.begin(), res.end());

    // cout << res[res.size()-1];

    return 0;
}
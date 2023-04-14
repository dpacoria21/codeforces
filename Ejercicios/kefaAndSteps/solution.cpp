#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <string>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    ll n; cin >> n;
    ll arr[n];
    for(ll i=0; i<n; i++) {
        cin >> arr[i];
    }

    ll max = arr[0];
    ll count = 1;

    vector<ll>res;

    for(ll i=1; i<n; i++) {
        if(max <= arr[i]) {
            count++;
        }else {
            res.push_back(count);
            count = 1;
        }
        max = arr[i];
    }

    res.push_back(count);

    sort(res.begin(), res.end());

    cout << res[res.size()-1];

    return 0;
}
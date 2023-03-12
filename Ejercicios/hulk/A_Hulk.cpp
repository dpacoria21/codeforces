#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <string>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    ll n;
    cin >> n;
    string m[2] = {"I hate it", "I love it"};
    string res = "I hate it";



    for(ll i=1 ; i<n ; i++){
        res = res.substr(0, res.size()-3) + " that " + m[i%2];
    }

    cout << res;

    return 0;
}
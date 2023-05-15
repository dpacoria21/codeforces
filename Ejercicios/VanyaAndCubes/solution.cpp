#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <string>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int n; cin >> n;
    ll sum = 1;
    ll line = 1;
    ll i = 2;
    ll count = 0;
    while(sum <= n) {
        line += i;
        sum+=line;
        i++;
        count++;
    }
    cout << count;
    return 0;
}
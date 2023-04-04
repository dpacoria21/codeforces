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
    if(n%2 == 0) {
        cout << 4 << " " << n-4;   
    }else {
        cout << 9 << " " << n-9;
    }
    return 0;
}
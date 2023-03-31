#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <string>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int n, k;
    int rest;
    cin >> n >> k;
    rest = 240-k;
    int count = 0;
    for(int i=0; i<n; i++) {
        if(rest - 5*(i+1) < 0) {
            break;
        }
        rest -= 5*(i+1);
        count++;
    }
    cout << count;
    return 0;
}
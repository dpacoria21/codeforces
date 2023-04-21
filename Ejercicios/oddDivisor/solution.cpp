#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;
using ll = long long;
using ld = long double;
typedef vector<int>vi;
typedef pair <int, int> pi;

int main() {
    int t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        bool hasOdd = false;
        while(n%2 == 0) {
            n = n/2;
        }
        if(n == 1) {
            cout << "NO" << "\n";
        }else {
            cout << "YES" << "\n";
        }
    }
    return 0;
}
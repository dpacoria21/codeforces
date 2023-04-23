#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <string>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin >> n;
        int c1, c2;
        c2 = round((double)n/3)*2;
        c1 = n-c2;
        cout << c1 << " " << c2/2 << "\n";
    }
    return 0;
}
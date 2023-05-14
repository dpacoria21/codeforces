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
    while(n--) {
        string s; cin >> s;
        if(s.size()%2 != 0) {
            cout << "NO" << "\n";
        }else {
            string h1, h2;
            h1 = s.substr(0, s.size()/2);
            h2 = s.substr(s.size()/2, s.size());
            if(h1 == h2) {
                cout << "YES" << "\n";
            }else {
                cout << "NO" << "\n";
            }
        }
    }
    return 0;
}
#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <string>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int scr; cin >> scr;
        if(scr >= 1900) {
            cout << "Division 1" << "\n";
        }else if(scr >= 1600 && scr <= 1899) {
            cout << "Division 2" << "\n";
        }else if(scr <= 1599 && scr >=1400) {
            cout << "Division 3" << "\n";
        }else {
            cout << "Division 4" << "\n";
        }
    }
    return 0;
}
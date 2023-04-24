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
        int n; cin >> n;
        int c1 = 0, c2 = 0;
        for(int i=0; i<n; i++) {
            int k; cin >> k;
            if(k == 1) {
                c1++;
            }else {
                c2++;
            }
        }
        if(c1%2 == 0 && c2%2 == 0) {
            cout << "YES" << "\n";
        }else if(c2%2!=0 && c1%2==0 && c1!=0) {
            cout <<  "YES" << "\n";
        }else {
            cout << "NO" << "\n";
        }
        
    }
    return 0;
}
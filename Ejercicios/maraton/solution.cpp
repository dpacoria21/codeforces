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
        int a; cin >> a;
        int count = 0;
        for(int i=0; i<3; i++) {
            int b; cin >>b;
            if(b>a) {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
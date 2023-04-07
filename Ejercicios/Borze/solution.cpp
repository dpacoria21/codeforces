#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <string>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    string n; cin >> n;

    for(int i=0; i<n.size(); i++) {
        if(n[i] == '.') {
            cout << 0;
        }else if( n[i] == '-' ) {
            if(n[i+1] == '.') {
                cout << 1;
            }else{
                cout << 2;
            }
            i++;
        }
    }
    return 0;
}
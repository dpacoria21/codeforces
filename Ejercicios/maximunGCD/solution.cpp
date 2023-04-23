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
        int aux; cin >> aux;
        if(aux%2==0) {
            cout << aux/2 << "\n";
        }else {
            cout << (aux-1)/2 << "\n";
        }
    }
    return 0;
}
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
        int n; cin >> n;
        for(int i=0; i<n; i++) {
            int aux; cin >> aux;
            cout << n-aux+1 << " ";
        }
        cout << "\n";
    }
    return 0;
}
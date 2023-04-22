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
        int a, b;
        int res;
        cin >> a >> b;
        
        int sideMax = max(a, b);
        int sideMin = min(a, b);

        if(sideMin*2 >= sideMax) {
            cout << pow(sideMin*2, 2) << "\n";
        }else {
            cout << pow(sideMax, 2) << "\n";
        }

    }
    return 0;
}
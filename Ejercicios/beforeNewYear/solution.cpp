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
        int h, m;
        cin >> h >> m;
        int res = (23-h)*60 + (60-m);
        cout << res << "\n";
    }
    return 0;
}
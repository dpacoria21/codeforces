#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        ll a,b,c;
        cin >> a >> b >> c;
        ll timeF = abs(a-1);
        ll timeS = abs(c-b) + abs(c-1);
        if(timeF == timeS) {
            cout << 3 << "\n";
        }else if(timeF < timeS) {
            cout << 1 << "\n";
        }else {
            cout << 2 << "\n";
        }
    }
    return 0;
}
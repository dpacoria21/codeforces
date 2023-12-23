#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;
        if(n==1) {
            cout << "YES\n";
        }else if(n==2) {
            if(s[0]==s[1]) {
                cout << "NO\n";
            }else {
                cout << "YES\n";
            }
        }else {
            cout << "NO\n";
        }
    }
    return 0;
}

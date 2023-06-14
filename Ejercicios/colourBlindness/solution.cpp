#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        bool flag = true;
        for(int i=0; i<n; i++) {
            if(s1[i]=='R' && s2[i]!='R') {
                flag = false;
                break;
            }else if(s1[i]!='R' && s2[i]=='R') {
                flag = false;
                break;
            }
        }
        if(flag) {
            cout << "YES\n";
        }else {
            cout << "NO\n";
        }
    }
    return 0;
}
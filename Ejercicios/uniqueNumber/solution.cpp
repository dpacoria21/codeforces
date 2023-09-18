#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        set<int>set;
        string s = "";
        if(n <= 9) {
            cout << n << "\n";
            continue;
        }else if(n>45) {
            cout << -1 << "\n";
        }else{
            int acc = 0;
            int i;
            for( i=9; acc <= n ; i--) {
                if(acc+i >= n) {
                    s = to_string(n-acc) + s;
                    acc+=(n-acc);
                    break;
                }
                s = to_string(i) + s;
                acc+=i;
            }
            cout << s << "\n";
        }
    }
    return 0;
}
#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        map<int, int>count;
        int res = -1;
        for(int i=0; i<n; i++) {
            int a; cin >> a;
            if(count[a] == 0) {
                count[a] = 1;
            }else {
                count[a]++;
                if(count[a] == 3) {
                    res = a;
                }
            }
        }
        cout << res << "\n";
    }
    return 0;
}
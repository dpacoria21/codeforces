#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int w, h, n;
        cin >> w >> h >> n;
        ll res = 0;
        while(res < n) {
            res += w%2==0 ? 1 : 0;
            res += h%2==0 ? 1 : 0;
            if(w%2==0) {
                w/=2;
            }
            if(h%2==0){
                h/=2;
            }
            if(w%2!=0 && h%2!=0) {
                break;
            }

        }
        if(pow(2, res) >= n ) {
            cout << "YES" <<"\n";
        }else {
            cout << "NO" << "\n";
        }
    }
    return 0;
}
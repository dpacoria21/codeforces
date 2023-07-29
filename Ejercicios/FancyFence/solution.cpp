#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        double n; cin >> n;
        bool flag = false;
        double ang = 0;
        double i=3;
        double sumT = 180;
        while(ang <= n) {
            ang = sumT/i;
            if(ang==n) {
                flag=true;
                break;
            }
            sumT+=180;
            i++;
        }
        if(flag) {
            cout << "YES\n";
        }else {
            cout << "NO\n";
        }
    }
    return 0;
}
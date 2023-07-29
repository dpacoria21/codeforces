#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        ll n, k;
        cin >> n >> k;
        if(n%2==0 && k%2==0 && pow(k,2)<=n) {
            cout << "YES\n";
        }else if(n%2!=0 && k%2!=0 && pow(k, 2) <=n){
            cout << "YES\n";
        }else {
            cout << "NO\n";
        }
    }
    return 0;
}
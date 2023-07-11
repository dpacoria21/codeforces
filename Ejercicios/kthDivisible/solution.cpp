#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;
typedef vector<int>vi;
typedef pair <int, int> pi;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) {
        ll n, k;
        cin >> n >> k;
        if(k<n) {
            cout << k << "\n";
        }else if (n==k) {
            cout << k+1 << "\n";
        }else {
            if((k+(k/(n-1)))%n == 0) {
                cout << k+(k/(n-1))-1 << "\n";
            }else {
                cout << k+(k/(n-1)) << "\n";
            }
        }
    }
    return 0;
}
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
        ll n, m;
        cin >> n >> m;
        if(n==1) {
            cout << (ll)(ceil((double)m/2)) << "\n";
        }else {
            if(n%2==0) {
                cout << (ll)((n/2)*m)<< "\n";
            }else {
                cout << (ll)((n/2)*m + ceil((double)m/2)) << "\n";
            }
        }
    }
    return 0;
}
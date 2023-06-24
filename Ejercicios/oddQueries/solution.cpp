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
        ll n, q;
        cin >> n >> q;
        ll res = 0;
        ll arr[n+2];
        vector<ll>sumas;
        sumas.push_back(100);
        for(int i=1; i<=n; i++) {
            cin >> arr[i];
            res+=arr[i];
            sumas.push_back(res);
        }
        while(q--){
            ll l,r,k;
            cin >> l >> r >> k;
            ll total = sumas[l-1]+(r-l+1)*k+sumas[sumas.size()-1] - sumas[r];
            if(total%2==0) {
                cout << "NO\n";
            }else {
                cout << "YES\n";
            }
        }
    }
    return 0;
}
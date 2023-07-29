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
        ll arr[n];
        for(int i=0; i<n; i++) {
            cin >> arr[i];
        }
        sort(arr, arr+n);
        ll consec = 1;
        ll maxi = 1;
        for(int i=0; i<n-1; i++) {
            if(abs(arr[i] - arr[i+1]) <= k) {
                consec++;
            }else {
                maxi = max(maxi, consec);
                consec = 1;
            }
        }
        maxi = max(maxi, consec);
        cout << n-maxi << "\n";
    }
    return 0;
}
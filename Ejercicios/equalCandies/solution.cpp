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
        int n; cin >> n;
        int mini = INT_MAX;
        int arr[n];
        for(int i=0; i<n; i++) {
            cin >> arr[i];
            mini = min(mini, arr[i]);
        }
        ll res = 0;
        for(int i=0; i<n; i++) {
            res += arr[i]-mini;
        }
        cout << res << "\n";
    }
    return 0;
}
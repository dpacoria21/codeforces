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
        ll n, c;
        cin >> n >> c;
        ll arr[n];
        for(ll i=0; i<n; i++) {
            cin >> arr[i];
        }
        sort(arr, arr+n);

        ll count = 0;
        while(arr[n-1]*arr[n-1] <= c) {
            count++;
            arr[n-1] = arr[n-1] + 2*count;
        }
        cout << count << "\n";
    }
    return 0;
}
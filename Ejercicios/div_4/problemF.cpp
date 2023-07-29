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
        ll n; cin >> n;
        ll arr[n];
        ll maxi = 0;
        for(int i=0; i<n; i++) {
            cin >> arr[i];
            if(arr[i]%2==0) {
                maxi = max(maxi, arr[i]);
            }
        }
        ll count = 0;
        for(int i=0; i<n; i++) {
            if(maxi%arr[i]==0) {
                count++;
            }
        }
        cout << count << "\n";
    }
    return 0;
}
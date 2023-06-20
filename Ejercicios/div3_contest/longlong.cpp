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
        ll res = 0;
        ll arr[n];
        for(int i=0; i<n; i++) {
            cin >> arr[i];
            if(arr[i] < 0) {
                res += (arr[i]*-1);
            }else {
                res += arr[i];
            }
        }
        ll minC = 0;
        ll flag = false;
        for(int i=0; i<n; i++) {
            if(arr[i] < 0 && flag == false) {
                minC++;
                flag =true;
            }else if(arr[i] > 0) {
                flag = false;
            }
        }
        cout << res << " " << minC << "\n";
    }
    return 0;
}
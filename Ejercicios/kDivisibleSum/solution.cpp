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
        int n, k;
        cin >> n >> k;
        if(n==1) {
            cout << n*k << "\n";
        }else {
            ll l = 1, r = n*n, mid;
            while(l<r) {
                mid = (l+r)/2;

                // if( (mid*n)%k==0 ) {
                //     cout << mid << "\n";
                // }

                if( (mid*n)/k <= 0 ) {
                    l = mid+1;
                }else if( (mid*n)/k > 0) {
                    r = mid-1;
                }
            }
            if( (mid*n)*k==0 ) {
                cout << mid  << "\n";
            }else {
                cout << mid+1 << "\n";
            }
        }
    }
    return 0;
}
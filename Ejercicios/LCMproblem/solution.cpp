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
        ll l, r;
        cin >> l >> r;
        ll resp = 1;
        ll count = 0;
        for(int i=2; i<=r; i++) {
            if(count==2) break;
            while(l%i==0 && r%i==0 && count!=2) {
                if(resp*i>=l && resp*i<=r) {
                    resp*=i;
                    cout << resp << " ";
                    count++;
                    l/=i;
                    r/=i;
                }else {
                    break;
                }
            }

        }
        cout << "\n";
    }
    return 0;
}
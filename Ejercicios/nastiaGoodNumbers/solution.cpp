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
        ll a, b;
        cin >> a >> b;
        if(b==1) {
            cout << "NO" << "\n";
        }else {
            cout << "YES" << "\n";
            if(b%2==0) {
                b*=4;
                cout << a*(b/2-1) << " " << a*(b-b/2+1) << " " << a*b << "\n";
            }else {
               cout << a*(b/2) << " " << a*(b-b/2) << " " << a*b << "\n";
            }
        }
    }
    return 0;
}
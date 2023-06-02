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
        int a, b, c, n;
        cin >> a >> b >> c >> n;
        int maxValue = max(a, max(b, c));
        int equalCandys = (maxValue-a) + (maxValue-b) + (maxValue-c);
        if(n < equalCandys) {
            cout << "NO" << "\n";
        }else if(equalCandys == n) {
            cout << "YES" << "\n";
        }else if( (n-equalCandys)%3==0 ) {
            cout << "YES" << "\n";
        }else {
            cout << "NO" << "\n";
        }
    }
    return 0;
}
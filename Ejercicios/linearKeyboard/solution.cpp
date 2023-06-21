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
        string alpha; cin >> alpha;
        string s; cin >> s;
        int res = 0;
        for(int i=1; i<s.size(); i++) {
            res += max(alpha.find(s[i]), alpha.find(s[i-1])) - min(alpha.find(s[i]), alpha.find(s[i-1]));
        }
        cout << res << "\n";
    }
    return 0;
}
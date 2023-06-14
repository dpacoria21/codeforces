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
        set<char>eq;
        int n; cin >> n;
        string s; cin >> s;
        ll res = 0;
        for(int i=0; i<s.size(); i++) {
            if( eq.count(s[i]) ) {
                res++;
            }else {
                eq.insert(s[i]);
                res+=2;
            }
        }
        cout << res << "\n";
    }
    return 0;
}
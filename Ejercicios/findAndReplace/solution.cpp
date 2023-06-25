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
        string s; cin >> s;
        map<char, int>map;
        bool flag = true;
        int val = 1;
        for(int i=0; i<s.size(); i++) {
            if(map[s[i]] == 0) {
                map[s[i]] = val;
            }else {
                if( map[s[i]] == map[s[i-1]] || map[s[i]] == map[s[i+1]] ) {
                    flag = false;
                    break;
                };
            }
            val = val == 1 ? 2 : 1;
        }
        if(flag) {
            cout << "YES\n";
        }else {
            cout << "NO\n";
        }
    }
    return 0;
}
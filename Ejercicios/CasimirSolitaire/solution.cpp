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
        string s; cin >> s;
        int a=0, b=0,c=0;
        for(int i=0; i<s.size();i++) {
            if(s[i]=='A') {
                a++;
            }else if(s[i]=='B'){
                b++;
            }else {
                c++;
            }
        }
        if(a+c == b) {
            cout << "YES\n";
        }else {
            cout << "NO\n";
        }

    }
    return 0;
}
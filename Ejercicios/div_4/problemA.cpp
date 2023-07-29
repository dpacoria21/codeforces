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
        int a, b ,c;
        cin >> a >> b >> c;
        if(a+b >=10 || b+c>=10 || c+a>=10) {
            cout << "YES\n";
        }else {
            cout << "NO\n";
        }
    }
    return 0;
}
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
    int t; cin>> t;
    while( t-- ) {
        int n; cin >> n;
        int index = 0;
        int quality = -1;
        for(int i=1; i<=n; i++) {
            int p, q;
            cin >> p >> q;
            if(p<=10 && q>=quality) {
                index = i;
                quality = q;
            }
        }
        cout << index << "\n";
    }
    return 0;
}
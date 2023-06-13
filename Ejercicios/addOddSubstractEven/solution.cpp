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
        int a, b;
        cin >> a >> b;
        if(a == b) {
            cout << 0 << "\n";
        }else if(a < b) {
            if((b-a)%2==0) {
                cout << 2 << "\n";
            }else {
                cout << 1 << "\n";
            }
        }else if(a > b) {
            if((a-b)%2==0) {
                cout << 1 << "\n";
            }else {
                cout << 2 << "\n";
            }
        }
    }
    return 0;
}
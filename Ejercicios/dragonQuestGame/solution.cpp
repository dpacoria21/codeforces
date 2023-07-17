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
        int x, n , m;
        cin >> x >> n >> m;

        
        while(n!=0 && x>m*10) {
            x = floor(x/2)+10;
            n--;
        }
        if(x>m*10) {
            cout << "NO" << "\n";
        }else {
            cout << "YES" << "\n";
        }
        

    }
    return 0;
}
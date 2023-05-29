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
        int n, x;
        cin >> n >> x;
        if(n==1 || n==2) {
            cout << 1 << "\n";
        }else {
            for(int i=0;true; i++) {
                if(n>=((i*x)+3) && n<=(((i+1)*x)+2)) {
                    cout << i+2 << "\n";
                    break;
                }
            }
        }
    }
    return 0;
}
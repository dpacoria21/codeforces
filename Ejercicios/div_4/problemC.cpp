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
        string s = "";
        for(int i=0; i<8; i++) {
            for(int j=0; j<8; j++) {
                char aux; cin >> aux;
                if(aux != '.') {
                    s+=aux;
                }
            }
        }
        cout << s << "\n";
    }
    return 0;
}
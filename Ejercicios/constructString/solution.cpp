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
    string z = "abcdefghijklmnopqrstuvwxyz";
    while(t--) {
        int n, a, b;
        cin >> n >> a >> b;
        string s = "";
        while(s.size() < n) {
            if(s.size()+b > n) {
                s+=z.substr(0,n-s.size());
            }else {
                s+=z.substr(0,b);
            }
        }
        cout << s << "\n";

    }
    return 0;
}
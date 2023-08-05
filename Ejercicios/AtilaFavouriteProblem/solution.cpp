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
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;
        sort(s.begin(), s.end());
        cout << alphabet.find(s[s.size()-1])+1 << "\n";
    }
    return 0;
}
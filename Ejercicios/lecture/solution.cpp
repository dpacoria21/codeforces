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
    int n, m;
    cin >> n >> m;
    map<string, string>words;
    for(int i=0; i<m; i++) {
        string a1, b1;
        cin >> a1 >> b1;
        if(a1.size() > b1.size()) {
            words[a1] = b1;
        }else {
            words[a1] = a1;
        }
    }
    for(int i=0; i<n; i++) {
        string s; cin >> s;
        cout << words[s] << " ";
    }
    return 0;
}
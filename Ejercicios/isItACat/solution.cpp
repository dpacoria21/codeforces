#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    string say = "meow";
    string sound = "";
    sound.push_back(tolower(s[0]));
    for(int i=1; i<n; i++) {
        if(tolower(s[i])!=tolower(s[i-1])) {
            sound.push_back(tolower(s[i]));
        }
    }
    if(say==sound) {
        cout << "YES\n";
    }else {
        cout << "NO\n";
    }
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}

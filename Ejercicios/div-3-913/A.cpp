#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int t; cin >> t;
    vector<char>rows = {'1', '2', '3', '4', '5', '6', '7', '8'};
    vector<char>cols = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    while(t--) {
        string s; cin >> s;
        int r = s[1];
        for(int i=0; i<rows.size(); i++) {
            if(r!=rows[i]) {
                cout << s[0] << rows[i] << "\n";
            }
        }
        char c = s[0];
        for(int i=0; i<cols.size(); i++) {
            if(cols[i]!=c) {
                cout << cols[i] << s[1] << "\n";
            }
        }
    }
    return 0;
}

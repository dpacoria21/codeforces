#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        int pos = 1;
        for(int i=1; i<s.size(); i++) {
            if(s[i]!='0') {
                pos=i;
                break;
            }
        }
        if(stoi(s.substr(0, pos)) < stoi(s.substr(pos, s.size())) && stoi(s.substr(0, pos))!=0 && stoi(s.substr(pos, s.size()))!=0) {
            cout << s.substr(0, pos) << " " << s.substr(pos, s.size()) << "\n";
        }else {
            cout << -1 << "\n";
        }

    }
    return 0;
}

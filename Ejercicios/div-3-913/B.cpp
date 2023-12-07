#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        int uppers = 0;
        int lowers = 0;
        vector<char>res;
        for(int i=s.size()-1; i>=0; i--) {
            if(s[i]=='b') {
                lowers++;
            }else if(s[i]=='B') {
                uppers++;
            }else {
                if(s[i] == toupper(s[i])) {
                    if(uppers!=0) {
                        uppers--;
                        continue;
                    }
                }else {
                    if(lowers!=0) {
                        lowers--;
                        continue;
                    }
                }
                res.push_back(s[i]);
            }
        }
        for(int i=res.size()-1; i>=0; i--) {
            cout << res[i];
        }
        cout <<"\n";
    }
    return 0;
}

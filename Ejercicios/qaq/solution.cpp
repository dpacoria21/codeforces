#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;


int main() {
    string s; cin >> s;
    vector<int>qs;
    int count = 0;
    ll res = 0;
    for(int i=0; i<s.size(); i++) {
        if(s[i]=='Q') {
            count++;
        }else if(s[i]=='A') {
            int countq = 0;
            for(int j=i; j<s.size(); j++) {
                if(s[j]=='Q') {
                    countq++;
                }
            }
            res+= count*countq;
        }
    }
    cout << res;
    return 0;
}

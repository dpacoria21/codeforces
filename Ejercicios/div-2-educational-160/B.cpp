#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        int ones = 0;
        int zeros = 0;
        for(int i=0; i<s.size(); i++) {
            if(s[i]=='0') {
                zeros++;
            }else {
                ones++;
            }
        }
        if(zeros == ones) {
            cout << 0 << "\n";
        }else {
            int count = 0;
            for(int i=0; i<s.size(); i++) {
                if(s[i]=='0' && ones>0) {
                    ones--;
                }else if(s[i]=='1' && zeros>0) {
                    zeros--;
                }else if(zeros == 0 || ones == 0) {
                    cout << max(zeros, ones) << "\n";
                    break;
                }
            }
        }
    }
    return 0;
}

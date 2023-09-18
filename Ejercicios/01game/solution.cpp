#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        queue<char>qe;
        ll count = 0;
        if(s.size()==1) {
            cout << "NET" << "\n";
        }else {
            qe.push(s[0]);
            for(int i=1; i<s.size(); i++) {
                if(qe.front() != s[i] && qe.size()!=0) {
                    count++;
                    qe.pop();
                }else {
                    qe.push(s[i]);
                }
            }
            if(count%2==0) {
                cout << "NET" << "\n";
            }else {
                cout << "DA" << "\n";
            }
        }

    }
    return 0;
}
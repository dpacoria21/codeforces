#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        string letters = " abcdefghijklmnopqrstuvwxyz";

        string s; cin >> s;
        stack<>res;
        for(int i=s.size()-1; i>=0; i--) {
            int r = s[i]-'0';
            int r1 = s[i-1]-'0';
            int r2 = s[i-2]-'0';
            if(r==0) {
                res.push(letters[r2*10+r1]);
                i-=2;
            }else {
                res.push(letters[r]);
            }
        }
        while(res.size()!=0) {
            cout << res.top();
            res.pop();
        }
        cout << "\n";
    }
    return 0;
}

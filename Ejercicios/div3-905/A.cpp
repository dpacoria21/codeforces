#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        int curr = 1;
        ll cnt = 0;
        vector<int>tab = {10,1,2,3,4,5,6,7,8,9};
        for(int i=0;i<s.size(); i++) {
            int a = tab[s[i]-'0'];
            int b = tab[s[i+1]-'0'];
            if(a==curr) {
                cnt++;
                continue;
            }else if(a!=curr) {
                cnt += abs(a-curr)+1;
                curr = a;
                continue;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}

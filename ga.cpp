#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define F0R(i, a) FOR(i, 0, a)
#define ROF(i, a, b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i, a) ROF(i, 0, a)
#define rep(a) F0R(_, a)
#define each(a, x) for (auto &a : x)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        vector<ll>evens;
        vector<ll>odds;
        F0R(i, n) {
            ll aux; cin>>aux;
            if(aux%2==0) {
                evens.push_back(aux);
            }else {
                odds.push_back(aux);
            }
        }
        sort(evens.begin(), evens.end());
        sort(odds.begin(), odds.end());
        if(evens.size()%2==0 && odds.size()%2==0) {
            cout << "YES\n";
        }
    }
    return 0;
}
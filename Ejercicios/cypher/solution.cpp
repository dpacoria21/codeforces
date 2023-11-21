#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using db = long double;
using str = string;

using pi = pair<int, int>;
using pl = pair<ll, ll>;
using pd = pair<db, db>;
using ps = pair<int, str>;
#define mp make_pair
#define f first
#define s second

#define tcT template <class T
#define tcTU tcT, class U
tcT > using V = vector<T>;
tcT, size_t SZ > using AR = array<T, SZ>;

using vi = V<int>;
using vb = V<bool>;
using vl = V<ll>;
using vd = V<db>;
using vs = V<str>;
using vpi = V<pi>;
using vpl = V<pl>;
using vpd = V<pd>;
using vps = V<ps>;

// vectores
#define sz(x) int((x).size())
#define bg(x) begin(x)
#define all(x) bg(x), end(x)
#define rall(x) x.rbegin(), x.rend()
#define sor(x) sort(all(x))
#define rsz resize
#define ins insert
#define pb push_back
#define eb emplace_back
#define ft front()
#define bk back()

// Loops
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define F0R(i, a) FOR(i, 0, a)
#define ROF(i, a, b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i, a) ROF(i, 0, a)
#define rep(a) F0R(_, a)
#define each(a, x) for (auto &a : x)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vi keys;
        F0R(i, n) {
            int aux; cin >> aux;
            keys.pb(aux);
        }
        vps comb;
        F0R(i, n) {
            int a; cin >> a;
            str s; cin >> s;
            comb.pb(mp(a, s));
        }
        F0R(i, n) {
            F0R(j, comb[i].f) {
                if(comb[i].s[j] == 'D') {
                    keys[i]++;
                    if(keys[i]==10) {
                        keys[i] = 0;
                    } 
                }else {
                    keys[i]--;
                    if(keys[i] == -1) {
                        keys[i] = 9;
                    }
                }
            }
        }
        F0R(i, n) {
            cout << keys[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
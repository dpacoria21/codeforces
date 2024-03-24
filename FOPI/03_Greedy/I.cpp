#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
   #include "helpers/debug.h" 
#else
   #define dbg(...)     0
   #define chk(...)     0

   #define RAYA         0
#endif

using ll = long long;
using db = long double;
using str = string;

using pi = pair<int, int>;
using pl = pair<ll, ll>;
using pd = pair<db, db>;
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

// vectores
#define sz(x) int((x).size())
#define bg(x) begin(x)
#define all(x) bg(x), end(x)
#define rall(x) x.rbegin(), x.rend()
#define sor(x) sort(all(x))
#define rsor(x) sort(rall(x))
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
    ll n, r; cin>>n>>r;
    vpl pos;
    vpl neg;
    F0R(i, n) {
        ll a, b;cin>>a>>b;
        if(b<0) {
            neg.pb(mp(a, b));
        }else {
            pos.pb(mp(a, b));
        }
    }
    bool flag = true;
    sor(pos);
    F0R(i, pos.size()) {
        if(r>=pos[i].f){
            r+=pos[i].s;
        }else {
            flag = false;
            break;
        }
    }
    dbg(r);
    sort(all(neg), [](auto a, auto b) {
        return a.f+a.s > b.f+b.s;
    });
    dbg(neg);
    if(flag) {
        F0R(i, neg.size()) {
            if(r>=neg[i].f) {
                r+=neg[i].s;
                dbg(r);
                if(r<0) {
                    flag = false;
                    break;
                }
            }else {
                flag = false;
                break;
            }
        }
    }
    dbg(r);
    if(flag) {
        cout << "YES";
    }else {
        cout << "NO";
    }
    return 0;
}
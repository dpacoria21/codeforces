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
    int n; cin>>n;
    vpl ch;
    F0R(i, n) {
        ll l, r; cin>>l>>r;
        ch.pb(mp(l, r));
    }
    int m; cin>>m;
    vpl pr;
    F0R(i, m) {
        ll l, r; cin>>l>>r;
        pr.pb(mp(l, r));
    }
    sort(all(ch), [](auto a, auto b) {
        if(a.s<b.s) {
            return a.s<b.s;
        }else {
            return a.f<b.f;
        }
    });
    rsor(pr);

    // dbg(ch);
    // dbg(pr);
    ll op1 =  (pr[0].f - ch[0].s);
    // dbg(pr[0].f - ch[0].s);

    rsor(ch);
    sort(all(pr), [](auto a, auto b) {
        if(a.s<b.s) {
            return a.s<b.s;
        }else {
            return a.f<b.f;
        }
    });
    
    ll op2 = (ch[0].f - pr[0].s);

    ll res = max(op1, op2);
    if(res<=0) {
        cout << 0;
    }else {
        cout << res;
    }

    // dbg(pr);
    // dbg(ch);
    // dbg(ch[0].f - pr[0].s);
    
    return 0;
}
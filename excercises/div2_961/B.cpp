// #pragma GCC optimize("O3,unroll-loops")
// #pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
 
using namespace std;
 
#ifdef LOCAL
#include "./helpers/debug.h"
 
#define chk(...) if (!(__VA_ARGS__)) cerr << "\033[41m" << "Line(" << __LINE__ << ") -> function(" \
     << __FUNCTION__  << ") -> CHK FAILED: (" << #__VA_ARGS__ << ")" << "\033[0m" << "\n", exit(0);
 
#define MACRO(code) do {code} while (false)
#define RAYA MACRO(cerr << "\033[101m" << "================================" << "\033[0m" << endl;)
#else
#define dbg(...)
 
#define chk(...)
#define RAYA
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
 
#define FOR(i, a, b) for (ll i = (a); i < (b); ++i)
#define F0R(i, a) FOR(i, 0, a)
#define ROF(i, a, b) for (ll i = (b)-1; i >= (a); --i)
#define R0F(i, a) ROF(i, 0, a)
#define rep(a) F0R(_, a)
#define each(a, x) for (auto &a : x)
 
void solve(){
    ll n, m; cin>>n>>m;
    vl pts(n);
    vl cs(n);
    for(auto &a: pts) cin>>a;
    for(auto &a: cs) cin>>a;
    vpl ts;
    for(int i = 0 ; i<n; i++) {
        ts.pb({pts[i], cs[i]});
    }
    sor(ts);
    dbg(ts);
 
    ll ans = 0;
 
    for(int i = 0; i<n-1; i++) {
        ans = max(ans, min(ts[i].s, m/ts[i].f) * ts[i].f);
        if(abs(ts[i].f - ts[i+1].f) == 1) {
            ll lo = 0, hi = ts[i].s;
        }
    }
    ans = max(ans, min(ts[ts.size()-1].s, m/ts[ts.size()-1].f) * ts[ts.size()-1].f);
    cout << ans << "\n";
    dbg(ans);
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    // int t; t=1;
    while(t--) solve();
    return 0;
}
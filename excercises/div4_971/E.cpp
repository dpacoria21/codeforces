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
 
const ll N = 1e9;

void solve(){
    ll n, k; cin>>n>>k;
    auto f = [&](ll i) {
        ll s1, s2;
        if(k%2==0) {
            s1 = (k-1)*((k)/2);
        }else {
            s1 = ((k-1)/2)*(k);
        }

        if((n+k-1)%2==0) {
            s2 = ((n+k-1)/2)*(n+k) - s1;
        }else {
            s2 = (n+k-1)*((n+k)/2) - s1;
        }

        ll s3;
        if(i%2==0) {
            s3 = (i/2)*(i+1) - s1;
        }else {
            s3 = i*((i+1)/2) - s1;
        }
        return abs(s3 - (s2-s3));
    };

    ll lo = k, hi = k+n-1;
    while(hi - lo > 2) {
        ll mid1 = lo + (hi - lo)/3LL;
        ll mid2 = hi - (hi - lo)/3LL;
        ll f_mid1 = f(mid1);
        ll f_mid2 = f(mid2);
        if (f_mid1 < f_mid2) {
            hi = mid2;
        }
        else if(f_mid1 > f_mid2) {
            lo = mid1;
        }
        else if(f_mid1 == f_mid2) {
            lo = mid1;
            hi = mid2;
        }
    }
    // dbg(f(lo));
    cout << min(f(lo+1), f(lo)) << "\n";
    // dbg(lo+1, f(lo+1));
    // dbg(lo, f(lo));
    // for(ll i = k; i<=k+n-1; i++) {
    //     dbg(i, getSum(i));
    // }
    
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    // int t; t=1;
    while(t--) solve();
    return 0;
}
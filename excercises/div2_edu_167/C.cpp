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
    int n; cin>>n;
    vl as(n);
    for(auto &a: as) cin>>a;
    vl bs(n);    
    for(auto &a: bs) cin>>a;
    ll ans1 = 0, ans2 = 0;

    auto addMax = [&](int v, int idx) {
        if(idx==1) {
            ans1+=v;
        }else {
            ans2+=v;
        }
    };

    ll sums = 0, negs = 0;

    for(int i = 0; i<n; i++) {
        if(as[i]==-1 && bs[i]==-1) {
            negs++;
            continue;
        }else if(as[i]==1 && bs[i]==1) {
            sums++;
            continue;
        }

        if(as[i]>bs[i]) {
            addMax(as[i], 1);
        }else{
            addMax(bs[i], 2);
        }
    }

    while(negs!=0) {
        ans1>ans2?ans1--:ans2--;
        negs--;
    }
    while(sums!=0) {
        ans1>ans2?ans2++:ans1++;
        sums--;
    }

    cout << min(ans1, ans2) << "\n";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    // int t; t=1;
    while(t--) solve();
}
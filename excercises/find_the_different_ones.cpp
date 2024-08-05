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
    // Brute Force
    // int n; cin>>n;
    // vl arr(n);
    // for (int i = 0; i<n; i++) {
    //     cin>>arr[i];
    // }
    // int q; cin>>q;
    // vpl qs;
    // for(int i = 0; i < q; i++) {
    //     ll l, r; cin>>l>>r;
    //     qs.push_back({l, r});
    // }
    // vl cnts(n);
    // ll cnt = 1;
    // ll curr = arr[0];
    // for(int i = 0; i<n; i++) {
    //     if(arr[i]==curr) {
    //         cnts[i] = cnt;
    //     }else {
    //         cnt++;
    //         cnts[i] = cnt;
    //         curr = arr[i];
    //     }
    // }
    // map<pair<ll, ll>, pair<ll, ll>>memory;
    // for(ll i = 0; i<q; i++) {
    //     if(memory[{qs[i].f, qs[i].s}].f!=0) {
    //         cout << memory[{qs[i].f, qs[i].s}].f << " " << memory[{qs[i].f, qs[i].s}].s << "\n";
    //         continue;
    //     }
    //     if(cnts[qs[i].f-1]==cnts[qs[i].s-1]) {
    //         memory[{qs[i].f, qs[i].s}] = {-1, -1};
    //         cout << -1 << " " << -1 << "\n";
    //     }else {
    //         if(arr[qs[i].f-1]!=arr[qs[i].s-1]) {
    //             memory[{qs[i].f, qs[i].s}] = {qs[i].f, qs[i].s};
    //             cout << qs[i].f << " " << qs[i].s << "\n";
    //         }else {
    //             for(ll j = qs[i].f; j<qs[i].s-1; j++) {
    //                 if(arr[j]!=arr[qs[i].s-1]) {
    //                     memory[{qs[i].f, qs[i].s}] = {j+1, qs[i].s};
    //                     cout << j+1 << " " << qs[i].s << "\n";
    //                     break;
    //                 }
    //             }
    //         }
    //     }
    // }
    // cout << "\n";

    // Binary Search
    int n; cin>>n;
    vl arr(n); each(a, arr) cin>>a;
    set<ll>pos;
    for(int i = 0; i<n-1; i++) {
        if(arr[i]!=arr[i+1]) pos.insert(i);
    }

    ll q; cin>>q;
    while(q--) {
        ll i, j; cin>>i>>j;
        i--; j--;
        auto idx = pos.lower_bound(i);
        if(idx==pos.end() || *idx >= j) {
            cout << -1 << " " << -1 << "\n";
        }else {
            cout << *idx + 1 << " " << *idx + 2 << "\n";
        }
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    // int t; t=1;
    while(t--) solve();
    return 0;
}
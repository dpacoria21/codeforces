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
 
// const ll N = 1e6;
// const ll MOD = 1e9 + 7;
 
// ll n, x;
 
// vl memo(N+5, 0);
// vl vis(N+5, false);
// ll c[N+5];
 
// ll num_ways = 0;
 
// ll num_rcv(ll cap) {
//     if(cap==0) return 1;
//     if(cap<0) return 0;
 
//     ll ans = 0;
//     for(int i = 1; i<=n; i++) {
//         ans += num_rcv(cap-c[i])%MOD;
//     }
    
//     return ans;
// }
 
// ll num_dp(ll cap) {
//     if(cap==0) return 1;
//     if(cap<0) return 0;
 
//     if(vis[cap]) return memo[cap];
 
//     ll ans = 0;
//     for(int i=1; i<=n; i++) {
//         ans += num_dp(cap-c[i]);
//     }   
 
//     vis[cap] = true;
//     return memo[cap] = ans % MOD;
// }
 
 
// ll num_dp_diff(ll cap) {
//     if(cap==0) return 1;
//     if(cap<0) return 0;
 
//     if(vis[cap]) return memo[cap];
 
//     ll ans = 0;
//     for(int i = 1; i<=n; i++) {
//         ans += num_dp_diff(cap-c[i]);
//     }
//     vis[cap] = true;
//     return memo[cap] = ans % MOD;
// }
 
// void solve(){
 
//     cin>>n>>x;
//     for(int i =1 ; i<=n; i++) {
//         ll aux; cin>>aux;
//         c[i] = aux;
//     }
 
//     // cout << num_rcv(x) << "\n";
//     cout << num_dp(x) << "\n";
    
// }
 
ll n;
const ll N = 1e6;
const ll MOD = 1e9 + 7;
 
vl memo(N+5, 0);
vector<bool> vis(N+5, false);
 
ll dice_rcv(ll cant) {
 
    if(cant == n) return 1;
    if(cant > n) return 0;
 
    ll ans = 0;
    for(ll i =1; i<=6 ;i++) {
        ans += dice_rcv(cant+i);
    }
 
    return ans % MOD;
 
}
 
 
// bottom-top
ll dice_dp(ll cant) {
    if(cant == n) return 1;
    if(cant > n) return 0;
    if(vis[cant]) return memo[cant];
    ll ans = 0;
    for(int i = 1; i<=6; i++) {
        ans +=  dice_dp(cant+i);
    }
 
    vis[cant] = true;
    return memo[cant] = ans%MOD;
}
 
// top-bottom
ll dice_dp_tb(ll cant) {
    if(cant == 0) return 1;
    if(cant < 0) return 0;
    if(vis[cant]) return memo[cant];
 
    ll ans = 0;
    for(int i=1; i<=6; i++) {
        ans += dice_dp_tb(cant-i);
    }
 
    vis[cant] = true;
    return memo[cant] = ans % MOD;
}
 
void solve() {
    cin>>n;
    // cout << "RCV: " << dice_rcv(0) << "\n";
    // cout << "DP: " << dice_dp(0) << "\n";
    // cout << dice_dp(0) << "\n";
    cout << dice_dp_tb(n) << "\n";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // int t; cin>>t;
    int t; t=1;
    while(t--) solve();
}
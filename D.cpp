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

const ll N = 2*1e5+5;
ll n, m;
const ll INF = LLONG_MAX;
vector<vector<pair<ll,ll>>>G;
vector<bool> vis(N, false);
vector<ll>ans;

// void dfs(ll v) {
//     if(vis[v]) return;
//     vis[v] = true;
//     for(auto u: G[v]) {
//         if(ans[v]==INF && ans[u.f]==INF) {
//             ans[v] = 0;
//             ans[u.f] = u.s;
//         }else if(ans[v]==INF && ans[u.f]!=INF) {
//             ans[v] = ans[u.f]-u.s;
//         }else if(ans[v]!=INF && ans[u.f]==INF) {
//             ans[u.f] = ans[v]+u.s;
//         }
//         dfs(u.f);
//     }
// }

ll dfs2(ll v, ll sum) {
    if(vis[v]) {
        return ans[v];
    }
    vis[v] = true;

    for(auto u: G[v]) {
        sum = dfs2(u.f, sum+u.s);
        ans[u.f] = sum;
        sum-=u.s;
    }
    return ans[v] = sum;
}

void solve(){
    cin>>n>>m;
    G.resize(n, vector<pair<ll,ll>>());
    ans.resize(n, INF);
    for(ll i = 0; i<m; i++) {
        ll u,v,w; cin>>u>>v>>w;
        u--, v--;
        G[u].push_back({v, w});
    }
    for(ll i = 0; i<n; i++) {
        dfs2(i, 0);
    }

    for(ll i = 0; i<n; i++) {
        cout << ans[i] << " ";
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // int t; cin>>t;
    int t; t=1;
    while(t--) solve();
    return 0;
}
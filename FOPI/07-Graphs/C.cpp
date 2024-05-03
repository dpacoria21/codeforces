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
#define FOR(i, a, b) for (ll i = (a); i < (b); ++i)
#define F0R(i, a) FOR(i, 0, a)
#define ROF(i, a, b) for (ll i = (b)-1; i >= (a); --i)
#define R0F(i, a) ROF(i, 0, a)
#define rep(a) F0R(_, a)
#define each(a, x) for (auto &a : x)

const ll N = 5*1e5;

vpi G[N];
vl color(N, 0);
vl par_edge(N, -1);
vl par(N, -1);
vi cycle;

void DFS_visit(ll u) {
    color[u] = 1;
    for(auto [v, e]: G[u]) {
        if(!cycle.empty()) break;
        if(color[v]==2) continue;
        if(color[v]==1) {
            // Repetidos
            ll at = u;
            while(at!=v) {
                cycle.emplace_back(par_edge[at]);
                at = par[at];
            }
            reverse(all(cycle));
            cycle.emplace_back(e);
        }
        if(color[v]==0) {
            par[v] = u;
            par_edge[v]=e;
            DFS_visit(v);
        }
    }
    color[u] = 2;
}

void DFS(ll n) {
    FOR(i, 0, n) {
        if(color[i]) continue;
        DFS_visit(i);
    }
    if(cycle.empty()) {
        cout << -1;
    }else {
        cout << cycle.size() << "\n";
        each(a, cycle) {
            cout << a << "\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, m; cin>>n>>m;
    F0R(i, m) {
        ll u, v; cin>>u>>v;
        G[u].emplace_back(v, i);
    }
    DFS(n);
    return 0;
}
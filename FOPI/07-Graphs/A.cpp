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

vector<vector<int>>G;

vector<ll> BFS(ll s) {
    ll n = G.size();
    vector<ll>levels(n, -1);
    levels[s] = 0;
    queue<ll>Q;
    Q.emplace(s);
    while(!Q.empty()) {
        ll u = Q.front(); Q.pop();
        for(auto v: G[u]) {
            if(levels[v]!=-1) continue;
            levels[v] = levels[u]+1;
            Q.emplace(v);
        }
    }
    return levels;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin>>n;
    G.assign(n, vector<int>());
    F0R(i, n) {
        ll u, k; cin>>u>>k;
        u--;
        F0R(j, k) {
            ll v; cin>>v;
            v--;
            G[u].emplace_back(v);
        }
    }
    
    vector<ll> levels = BFS(0);
    for(int i=0; i<levels.size(); i++ ) {
        cout << i+1 << " " << levels[i] << "\n";
    }
    return 0;
}
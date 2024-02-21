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

vector<vector<int>> get_adyacency_matrix(int n, int m) {
    vector<vector<int>> M (n, vector<int>(n, 0));
    for(int i = 0; i<m; i++) {
        int u, v; cin>>u>>v;
        M[u][v] = 1; // M[u][v] = M[v][u] = 1 para no dirigidos
    }
    return M;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m; cin>>n>>m;
    vector< vector<int> > M = get_adyacency_matrix(n, m);
    for(int i=0; i<n; i++) {
        for(int j = 0; j<n; j++) {
            cout << M[i][j] << " \n"[j + 1==n];
        }
    }
    return 0;
}
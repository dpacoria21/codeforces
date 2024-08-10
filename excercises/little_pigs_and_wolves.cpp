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
    vector<str>grid(n+5, str(m+5, '.'));
    for(int i = 1; i<=n; i++) {
        str s; cin>>s;
        s = "."+s;
        grid[i] = s;
    }

    vector<vector<ll>> ans(n+5, vector<ll>(m+5, 0));
    // dbg(grid);
    for(int i = 1; i<=n; i++) {
        for(int j = 1; j<=m; j++) {
            if(grid[i][j]=='W') {
                if(grid[i][j-1]=='P') ans[i][j-1]++;
                if(grid[i][j+1]=='P') ans[i][j+1]++;
                if(grid[i+1][j]=='P') ans[i+1][j]++;
                if(grid[i-1][j]=='P') ans[i-1][j]++;
            }
        }
    }
    ll res = 0;
    for(int i = 1; i<=n; i++) {
        for(int j = 1; j<=m; j++) {
            if(grid[i][j]=='W') {
                ll v1 = ans[i][j-1]<=0 ? LLONG_MAX : ans[i][j-1];
                ll v2 = ans[i][j+1]<=0 ? LLONG_MAX : ans[i][j+1];
                ll v3 = ans[i-1][j]<=0 ? LLONG_MAX : ans[i-1][j];
                ll v4 = ans[i+1][j]<=0 ? LLONG_MAX : ans[i+1][j];
                ll mini = min(v1, min(v2, min(v3, v4)));
                if(ans[i][j-1]==mini) {
                    ans[i][j-1] = 0;
                    ans[i][j+1]--;
                    ans[i-1][j]--;
                    ans[i+1][j]--;
                    res++;
                }else if(ans[i][j+1]==mini) {
                    ans[i][j-1]--;
                    ans[i][j+1] = 0;
                    ans[i-1][j]--;
                    ans[i+1][j]--;
                    res++;
                }else if(ans[i-1][j]==mini) {
                    ans[i][j-1]--;
                    ans[i][j+1]--;
                    ans[i-1][j] = 0;
                    ans[i+1][j]--;
                    res++;
                }else if(ans[i+1][j]==mini){
                    ans[i][j-1]--;
                    ans[i][j+1]--;
                    ans[i-1][j]--;
                    ans[i+1][j] = 0;
                    res++;
                }
            }
        }
    }
    cout << res << "\n";

    // dbg(ans);

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // int t; cin>>t;
    int t; t=1;
    while(t--) solve();
}
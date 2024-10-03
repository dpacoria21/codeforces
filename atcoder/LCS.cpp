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

str s, tx;
const int N = 1e3*3+5;
ll memo[N][N];
bool vis[N][N];

ll dp(ll i, ll j) {

    if(i >= s.size() || j >= tx.size()) return 0;

    ll ans = 0;

    if(vis[i][j]) return memo[i][j];

    if(s[i]==tx[j]) {
        ans += 1 + dp(i+1, j+1);
        return ans;
    }

    ll botom = 0, top = 0;
    botom += dp(i+1, j);
    top += dp(i, j+1);
    vis[i][j] = true;
    return memo[i][j] = max(ans, max(botom, top));
}

void drawStr(ll i, ll j) {

    if(i>=s.size() || j>=tx.size()) {
        return;
    }

    ll ans = dp(i, j);


    ll c1 = 0;
    if(s[i]==tx[j]) {
        // c1 = 1+dp(i+1, j+1);
        // if(ans == c1) {
        cout << s[i];
        return drawStr(i+1, j+1);
        // }
    }

    ll c2 = dp(i+1, j);
    if(c2==ans) {
        return drawStr(i+1, j);
    }

    ll c3 = dp(i, j+1);
    if(c3==ans) {
        return drawStr(i, j+1);
    }
}

void solve(){
    cin>>s>>tx;
    dp(0, 0);
    drawStr(0, 0);
}



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // int t; cin>>t;
    int t; t=1;
    while(t--) solve();
    return 0;
}
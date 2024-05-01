// #pragma GCC optimize("O3,unroll-loops")
// #pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>

using namespace std;

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

// solution:
    // The problem required only when the ball reaches the end
    // I used two sets in an array because you can alternate when you finish with a ball and continue with other
    // *(wins[idx].begin()) permite obtener el primer elemento del set y asi poder iterar en este mismo

void solve() {
    ll n, m, x; cin>>n>>m>>x;
    vector<pair<ll, char>>movs;
    F0R(i, m) {
        ll c; cin>>c;
        char s; cin>>s;
        movs.push_back(mp(c, s));
    }
    set<ll>wins[2];
    int idx = 0;
    wins[idx].insert(x);
    
    F0R(i, m) {

        while(!wins[idx].empty()) {
            ll u = *(wins[idx].begin());
            wins[idx].erase(u);
            ll r = (u+movs[i].f > n) ? (u+movs[i].f)%n : u+movs[i].f;
            ll l = (u-movs[i].f <= 0) ? n-abs(u-movs[i].f) : u-movs[i].f;
            if(movs[i].s == '?' || movs[i].s == '0') {
                wins[(idx)?0:1].insert(r);
            }
            if(movs[i].s=='?' || movs[i].s == '1') {
                wins[(idx)?0:1].insert(l);
            }
        }
        idx = idx?0:1;
        
    }
    cout << wins[idx].size() << "\n";
    each(a, wins[idx]) {
        cout << a << " ";
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}
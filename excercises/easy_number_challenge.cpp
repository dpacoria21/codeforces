#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
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

ll d[1000000 + 5];
ll getDivisors(ll x) {
    ll cnt = 0;
    for(ll i = 1; i * i <= x; i++)  {
        if(x % i==0) {
            cnt++;
            if(i != x / i) cnt++;
        }
    }
    return cnt;
}

const ll LIMIT = 1073741824;

void solve(){
    ll a, b, c; cin>>a>>b>>c;
    ll res = 0;
    FOR(i, 1, a+1) {
        FOR(j, 1, b+1) {
            FOR(k, 1, c+1) {
                ll aux = 0;
                if(d[i*j*k]) {
                    aux = d[i*k*j];
                }else {
                    aux = getDivisors(i*j*k);
                }
                d[i*k*j] = aux;
                res+=aux%LIMIT;
            }
        }
    }
    cout << res << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
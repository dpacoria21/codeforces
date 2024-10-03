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

void solve() {
    ll n, m, k; cin>>n>>m>>k;
    set<ll> a, b;
    F0R(i, n) {
        ll aux; cin>>aux;
        a.insert(aux);
    }
    F0R(i, m) {
        ll aux; cin>>aux;
        b.insert(aux);
    }

    ll cnt1 = 0, cnt2 = 0;

    FOR(i, 1, k+1) {
        if(!a.count(i) && !b.count(i)) {
            cout <<"NO\n";
            return;
        }

        if(a.count(i) && !b.count(i)) {
            cnt1++;
        }else if(!a.count(i) && b.count(i)) {
            cnt2++;
        }else {
            cnt1++;
            cnt2++;
        }
    }

    if(cnt1 >= k/2 && cnt2 >= k/2) {
        cout << "YES";
    }else {
        cout << "NO";
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
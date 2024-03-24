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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin>>n;
    int k1; cin>>k1;
    deque<ll>p1;
    deque<ll>p3;
    F0R(i, k1) {
        int aux; cin>>aux;
        p1.pb(aux);
        p3.pb(aux);
    }
    int k2; cin>>k2;
    deque<ll>p2;
    F0R(i, k2) {
        int aux; cin>>aux;
        p2.pb(aux);
    }
    bool flag = true;
    ll count = 0;
    while(true) {
        ll a = p1.front();
        p1.pop_front();
        ll b = p2.front();
        p2.pop_front();
        if(a>b) {
            p1.pb(b);
            p1.pb(a);
        }else {
            p2.pb(a);
            p2.pb(b);
        }
        count++;
        if(count > pow(2, 10)) {
            flag = false;
            break;
        }
        if(p1.size()==0 || p2.size()==0) break;
    }
    if(flag) {
        cout << count << " ";
        if(p1.empty()){
            cout << 2;
        }else {
            cout << 1;
        }
    }else {
        cout << -1;
    }
    return 0;
}
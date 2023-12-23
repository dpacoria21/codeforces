#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
   #include "helpers/debug.h" 
#else
   #define dbg(...)     0
   #define chk(...)     0

   #define DBG(x)        0
   #define DBGY(x)       0
   #define DBG2(x,y)     0
   #define DBG3(x,y,z)   0
   #define DBG4(x,y,z,w) 0
   #define RAYA          0
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
    int n;cin>>n;
    vpi points;
    F0R(i, n) {
        int x,y;
        cin>>x>>y;
        points.pb(mp(x, y));
    }
    int cnt = 0;
    F0R(i, n) {
        bool up = false, right = false, botom =false, left = false ; 
        F0R(j, n) {
            if(points[i].f==points[j].f && points[j].s > points[i].s) up = true;
            if(points[i].f==points[j].f && points[j].s < points[i].s) botom = true;
            if(points[i].s==points[j].s && points[j].f < points[i].f) left = true;
            if(points[i].s==points[j].s && points[j].f > points[i].f) right = true;
        }
        if(up && botom && left && right) {
            cnt++;
        }
    }
    cout << cnt << "\n";
    return 0;
}
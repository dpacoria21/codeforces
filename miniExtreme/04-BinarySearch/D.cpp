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
    vl arr(n);
    F0R(i, n) {
        cin>>arr[i];
    }
    sor(arr);
    dbg(arr);
    int k;cin>>k;
    F0R(i, k) {
        ll l, r;cin>>l>>r;
        ll lo = 0, hi = n;
        int itr = lower_bound(all(arr), l)-arr.begin();
        while(lo<hi) {
            ll mi = lo + (hi-lo) / 2;
            if(arr[mi] < l) {
                lo = mi+1;
            }else {
                hi = mi;
            }
        }
        cout << lo <<" x--x " << itr << "\n";
        ll ind = lo;

        int itr2 = upper_bound(all(arr), r)-arr.begin();
        lo = -1; hi = n-1;
        while(lo < hi) {
            ll mi = lo + (hi - lo + 1) / 2;
            if(arr[mi] > r) {
                hi = mi-1;
            }else {
                lo = mi;
            }
        }
        // cout << lo+1 << " +---+ " << itr2 << "\n";
        // cout << itr2 - itr << " ";
        cout << lo+1-ind << " ";
    }
    return 0;
}
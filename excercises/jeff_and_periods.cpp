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

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   ll n; cin>>n;
   vpl arr;
   map<ll, ll>map;
   FOR(i, 0, n) {
      ll aux; cin>>aux;
      arr.push_back(mp(aux, i));
      if(map[aux]) {
         map[aux]++;
      }else {
         map[aux] = 1;
      }
   }
   sor(arr);
   vpl res;
   FOR(i, 0, n) {
      if(map[arr[i].f] >= 2) {
         bool flag = true;
         ll pa = abs(arr[i].s-arr[i+1].s);
         FOR(j, i, i+map[arr[i].f]-1) {
            if(pa != abs(arr[j].s-arr[j+1].s)) {
               flag = false;
               break;
            } 
         }
         if(flag) {
            res.pb(mp(arr[i].f, (arr[i+1].s - arr[i].s)));
         }
         i+=map[arr[i].f]-1;
      }else {
         res.pb(mp(arr[i].f, 0));
      }
   }
   cout << res.size() << "\n";
   each(a, res) {
      cout << a.f << " " << a.s << "\n";
   }

   return 0;
}
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

void solve(ll n, ll m, ll k, vl a, vl b) {
   multiset<ll>a1;
   each(el, a) {
      a1.insert(el);
   }
   ll cnt = 0;
   each(el, b) {
      if(a1.find(el)!=a1.end()) {
         a1.erase(a1.find(el));
         cnt++;
      }
   }
   each(el, a1) {
      cout << el << " ";
   }
   if(k < cnt) {
      
   }else if(k==cnt) {
      cout << 1 << "\n";
   }else {
      cout << 0 << "\n";
   }
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin>>t;
   while(t--) {
      ll n, m, k; cin>>n>>m>>k;
      vl a(n);
      vl b(m);
      F0R(i, n) {
         cin>>a[i];
      }
      F0R(i, m) {
         cin>>b[i];
      }

      solve(n, m, k, a, b);

   }
   return 0;
}
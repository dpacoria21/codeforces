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

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin>>t;
   while(t--) {
      ll n, k; cin>>n>>k;
      // vl arr(n);
      ll sum = 0;
      deque<ll>ships;
      F0R(i, n) {
         ll aux; cin>>aux;
         sum += aux;
         ships.push_back(aux);
      }

      ll r = (k+1)/2;
      ll l = k-r;
      if(k >= sum) {
         cout << n << "\n";
      }else {
         ll cnt = 0;
         while(r!=0 || l!=0) {
            if(r!=0) {
               if(r>=ships.front()) {
                  r-=ships.front();
                  ships.pop_front();
                  cnt++;
               }else {
                  ll aux = ships.front()-r;
                  r=0;
                  ships.pop_front();
                  ships.push_front(aux);
               }
            } 
            if(l!=0) {
               if(l>=ships.back()) {
                  l-=ships.back();
                  ships.pop_back();
                  cnt++;
               }else {
                  ll aux = ships.back()-l;
                  l=0;
                  ships.pop_back();
                  ships.push_back(aux);
               }
            }
         }
         cout << cnt << "\n";
      }

   }
   return 0;
}
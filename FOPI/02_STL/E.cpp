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
    ll n1, n2, n3; cin>>n1>>n2>>n3;
    deque<ll>s1;
    deque<ll>s2;
    deque<ll>s3;
    ll sum1 = 0;
    ll sum2 = 0;
    ll sum3 = 0;
    F0R(i, n1) {
        ll aux; cin>>aux;
        s1.pb(aux);
        sum1+=aux;
    }
    F0R(i, n2) {
        ll aux; cin>>aux;
        s2.pb(aux);
        sum2+=aux;
    }
    F0R(i, n3) {
        ll aux; cin>>aux;
        s3.pb(aux);
        sum3+=aux;
    }

    ll mini = INT_MAX;

    while(true) {
        mini = min(sum1, min(sum2, sum3));
        dbg(sum1, sum2, sum3);
        if(sum1>mini) {
            sum1-=s1.front();
            s1.pop_front();
        }
        if(sum2>mini) {
            sum2-=s2.front();
            s2.pop_front();
        }
        if(sum3>mini) {
            sum3-=s3.front();
            s3.pop_front();
        }
        dbg(sum1, sum2, sum3);
        if(sum1==sum2 && sum2==sum3) {
            break;
        }
    }
    cout << sum1;

    return 0;
}
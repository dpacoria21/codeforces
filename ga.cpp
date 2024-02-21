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

bool isPrime (ll n) {
    FOR(i, 2, floor(sqrt(n))+1) {
        if(n%i==0) {
            return false;
        }
    }
    return true;
}

bool is_prime ( int N) {
    bool prime = true ;
    for (int p = 2; p * p <= N; p++) {
        if(N % p == 0) {
            prime = false ;
            break ;
        }
    }
    return prime ;
}

void factorized_prims(ll n) {
    if(n == 1) {
        cout << 1;
        return;
    }
    FOR(p, 2, floor(sqrt(n))+1) {
        if(n%p==0){
            while(n%p==0) {
                cout << p << " ";
                n /= p;
            }
        }
    }
    if(n!=1) cout << n;
}

ll computed_primes(ll n) {
    vector<bool>nums(n+1, true);
    nums[0] = nums[1] = false;
    for(ll i = 2; i<=n; i++) {
        if(nums[i]==false) continue;
        for(ll j = i*i; j<=n ;j+=i) {
            nums[j] = false;
        }
    }
    ll count = 0;
    F0R(i, n) {
        if(nums[i+1]) count++;
    }
    return count;
}

ll gcd (ll a, ll b, ll &x, ll &y) {
//    if(a > b) swap (a, b);
   if(a==0) {
    x = 0;
    y = 1;
    return b; 
   };
   ll x2, y2;
   ll d = gcd(b%a, a, x2, y2);
   x = y2 - x2*(b/a);
   y = x2;
   return d;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b; cin>>a>>b;
    cout << a+b;
    
    return 0;
}
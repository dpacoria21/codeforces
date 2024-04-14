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
    #define FOR(i, a, b) for (ll i = (a); i < (b); ++i)
    #define F0R(i, a) FOR(i, 0, a)
    #define ROF(i, a, b) for (ll i = (b)-1; i >= (a); --i)
    #define R0F(i, a) ROF(i, 0, a)
    #define rep(a) F0R(_, a)
    #define each(a, x) for (auto &a : x)

    ll calculateSum(ll n, vl arr) {
        ll sum = 0;
        F0R(i, arr.size()) {
            sum+=abs(arr[i]-n);
        }
        return sum;
    }

    int main() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        // Intuitive Solution
        ll n; cin>>n;
        vl arr(n);
        F0R(i, n) {
            cin>>arr[i];
        }
        sor(arr);
        // ll medio = arr[n/2];
        // ll res = 0;
        // F0R(i, n) {
        //     res+=abs(medio - arr[i]);
        // }
        // cout << res;

        // Ternary Search Solution
        
        ll lo = 0, hi = n-1;
        while(lo - hi > 1e9) {
            ll m1 = lo + (hi-lo) / 3;
            ll m2 = hi - ( hi -lo) / 3;
            ll f1 = calculateSum(m1, arr);
            ll f2 = calculateSum(m2, arr);

            if(f1 < f2) {
                lo = m1;
            }else {
                hi = m2;
            }
        }
        cout << calculateSum(arr[(lo+hi)/2], arr);
        return 0;
    }
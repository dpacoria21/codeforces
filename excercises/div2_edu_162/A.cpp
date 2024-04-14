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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vi arr(n);
        F0R(i, n) {
            cin>>arr[i];
        }
        int indX = -1, indY = -1;
        F0R(i, n) {
            if(arr[i]==1) {
                indX=i;
                break;
            }
        }
        R0F(i, n) {
            if(arr[i]==1) {
                indY=i;
                break;
            }
        }
        if(indX==indY || indX==-1 || indY==-1) {
            cout << 0 << "\n";
        }else {
            ll cnt = 0;
            FOR(i, indX, indY) {
                if(arr[i]==0) {
                    cnt++;
                }
            }
                cout << cnt << "\n";
        }
        // bool f1=false, f2=false;
        // int i = 0, j=n-1;
        // while(i < j) {
        //     if(!f1 && arr[i]==1) {
        //         f1 = true;
        //         indX=i;
        //     }
        //     if(!f2 && arr[j]==1) {
        //         f2 = true;
        //         indY=j;
        //     }
        //     i++; j--;
        //     if(f1 && f2) break;
        // }
        // if(indX==-1 || indY==-1) {
        //     cout << 0 << "\n";
        // }else {
        //     int count = 0;
        //     FOR(i, indX, indY) {
        //         if(arr[i]==0) count++;
        //     }
        //     cout << count << "\n";
        // }
    }
    return 0;
}
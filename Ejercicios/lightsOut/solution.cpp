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
    int grid[3][3];
    int originalGrid[3][3] = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};
    FOR(i, 0, 3) {
        FOR(j, 0, 3) {
            cin >> grid[i][j];
        }
    }
    FOR(i, 0, 3) {
        FOR(j, 0, 3) {
            if(grid[i][j]%2!=0) {
                if(i+1 < 3) {
                    if(originalGrid[i+1][j]==0) {
                        originalGrid[i+1][j]=1;
                    }else {
                        originalGrid[i+1][j]=0;
                    }
                }
                if(i-1 >=0) {
                    if(originalGrid[i-1][j]==0) {
                        originalGrid[i-1][j]=1;
                    }else {
                        originalGrid[i-1][j]=0;
                    }
                }
                if(j+1 < 3) {
                    if(originalGrid[i][j+1]==0) {
                        originalGrid[i][j+1]=1;
                    }else {
                        originalGrid[i][j+1]=0;
                    }
                }
                if(j-1 >=0) {
                    if(originalGrid[i][j-1]==0) {
                        originalGrid[i][j-1]=1;
                    }else {
                        originalGrid[i][j-1]=0;
                    }
                }
                if(originalGrid[i][j]==0) {
                    originalGrid[i][j]=1;
                }else {
                    originalGrid[i][j]=0;
                }
            }
        }
    }
    FOR(i, 0, 3) {
        FOR(j, 0, 3) {
            cout <<  originalGrid[i][j];
        }
        cout << "\n";
    }

    return 0;
}
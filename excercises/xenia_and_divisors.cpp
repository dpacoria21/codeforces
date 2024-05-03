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

void solve(){
    int n; cin>>n;
    vl arr(n);
    F0R(i, n) {
        cin>>arr[i];
    }
    sor(arr);
    vector<vl>res;
    bool flag = true;
    F0R(i, n) {
        if(arr[i]==-1) continue;
        vl aux;
        aux.pb(arr[i]);
        F0R(j, n) {
            if(j==i) continue;
            if(arr[j]==-1) continue;
            if(arr[j]%aux[aux.size()-1]==0 && arr[j] != aux[aux.size()-1]) {
                aux.pb(arr[j]);
                arr[j] = -1;
            }
            if(aux.size()==3) break;
        }
        if(aux.size()==3) {
            res.pb(aux);
        }
    }
    if(res.size()==n/3){
        each(a, res) {
            each(el, a) {
                cout << el << " ";
            }
            cout << "\n";
        }
    }else {
        cout << -1 << "\n";
    }


    // Time Limit :c

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
// #pragma GCC optimize("O3,unroll-loops")
// #pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "./helpers/debug.h"

#define chk(...) if (!(__VA_ARGS__)) cerr << "\033[41m" << "Line(" << __LINE__ << ") -> function(" \
     << __FUNCTION__  << ") -> CHK FAILED: (" << #__VA_ARGS__ << ")" << "\033[0m" << "\n", exit(0);

#define MACRO(code) do {code} while (false)
#define RAYA MACRO(cerr << "\033[101m" << "================================" << "\033[0m" << endl;)
#else
#define dbg(...)

#define chk(...)
#define RAYA
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
    str s; cin>>s;
    str s1(1, s[0]);
    char curr = s[0];
    for(int i = 1; i<n; i++) {
        if(s[i]=='1') {
            curr = s[i];
            s1.pb('1');
        }else if(curr=='1' && s[i]=='0') {
            s1.pb('0');
            curr = s[i];
        }else if(curr=='0' && s[i]=='0') {
            continue;
        }
    }  
    if(s1.size()==1) {
        cout << (s1=="0" ? "No" : "Yes") << "\n";
        return;
    }else if(s1.size()==2) {
        cout << (s1=="11" ? "Yes" : "No") << "\n";
        return;
    }else {
        vl zrs(1, 0), ones(1, 0);
        ll sum1=0, sum2 = 0;
        for(int i = 0; i<s1.size(); i++) {
            s1[i]=='1' ? sum1++ : sum2++;
            ones.pb(sum1);
            zrs.pb(sum2);
        }
        int idxL = -1, idxR = -1;
        for(int i = 1; i<=s1.size(); i++) {
            if(ones[i]>zrs[i]) {
                idxL = i;
                break;
            }
        }
        for(int i = s1.size(); i>0; i--) {
            if(ones[s1.size()]-ones[i-1]>zrs[s1.size()]-zrs[i-1]) {
                idxR = i;
                break;
            }
        }   
        if(sum1>sum2) {
            cout << "Yes\n";
        }else if(idxL==-1 || idxR==-1) {
            cout << "No\n";
        }else if(idxL<=idxR) {
            cout << "Yes\n";
        }else {
            cout << "No\n";
        }
    }
}



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    // int t; t=1;
    while(t--) solve();
    return 0;
}
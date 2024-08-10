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

vl arr;
// map<ll, ll>luckies;

// string version
// ll conv(str s) {
//     ll ans = 0;
//     ll size = s.size();
//     for(int i = 0; i<s.size(); i++) {
//         ll num = s[i]-'0';
//         ans += (num*(pow(10, size-(i+1))));
//     }
//     return ans;
// }

// void gen_comb(str s) {

//     if(s.size()>9) {
//         return;
//     }

//     gen_comb(s+"4");
//     gen_comb(s+"7");

//     if(s!=""){
//         arr.push_back(conv(s));
//         // luckies[conv(s)] = 1;
//     }

// }


// number version
void gen_comb(ll x) {
    if(x>1e10) {
        return;
    }

    arr.pb(x);

    gen_comb(x*10 + 4);
    gen_comb(x*10 + 7);
}

void solve(){
    ll l, r; cin>>l>>r;    
    ll ans = 0;
    ll curr = min(r, *lower_bound(all(arr), l)); // get value
    ll idx = lower_bound(all(arr), curr)-arr.begin(); // get index
    while(l <= r) {
        ans+= (abs(curr-l)+1)*arr[idx];
        l = curr+1;
        curr = min(r, arr[idx+1]);
        idx++;
    }
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    gen_comb(0);
    sor(arr);
    // int t; cin>>t;
    int t; t=1;
    while(t--) solve();
}
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;
typedef vector<int>vi;
typedef pair <int, int> pi;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int boys[n];

    for(int i=0; i<n; i++) {
        cin >> boys[i];
    }

    int m; cin >> m;
    int girls[m];
    for(int i=0; i<m; i++) {
        cin >> girls[i];
    }
    sort(boys, boys+n);
    sort(girls, girls+m);
    int res = 0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(abs(boys[i]-girls[j]) <= 1) {
                girls[j] = 1000;
                res++;
                break;
            }
        }
    }
    cout << res;
    return 0;
}
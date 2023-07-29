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
    int curr = -1;
    int count = 0;
    int res = -1;
    for(int i=0; i<n; i++) {
        int aux; cin >> aux;
        if(aux > curr) {
            count++;
            curr = aux;
        }else {
            res = max(res, count);
            count = 1;
            curr = aux;
        }
    }
    res = max(res, count);
    cout << res;

    return 0;
}
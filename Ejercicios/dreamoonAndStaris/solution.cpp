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
    int n, m;
    cin >> n >> m;
    int res;
    if(n%2==0) {
        res = n/2;
    }else {
        res = n/2+1;
    }
    if(m > n) {
        cout << -1;
    }else {
        while(res%m!=0) {
            res++;
        }
        if(res%m==0) {
            cout << res;
        }
    }
    return 0;
}
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
    ll n, l;
    cin >> n >> l;
    ld arr[n];
    for(int i=0; i<n;i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    
    ld resp = max(arr[0], l-arr[n-1]);

    for(int i=0; i<n-1; i++) {
        resp = max((arr[i+1]-arr[i])/2, resp);
    }

    cout << fixed << setprecision(10) <<resp;

    return 0;
}
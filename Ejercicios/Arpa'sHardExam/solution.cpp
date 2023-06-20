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
    if(n==0) {
        cout << 1;
    }else if(n==1){
        cout << 8;
    }else {
        n = n%4;
        if(n==0) {
            cout << 6;
        }else if(n==1) {
            cout << 8;
        }else if(n==2) {
            cout << 4;
        }else if(n==3) {
            cout << 2;
        }
    }
    return 0;
}
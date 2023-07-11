#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;
typedef vector<int>vi;
typedef pair <int, int> pi;

int calculateGCD (int a, int b)  {

    int res = 1;
    for(int i=2; i<min(a, b); i++) {
        if(a%i==0 && b%i==0) {
            res *= i;
        }
    }
    return res;
}

int calculateLCM (int a, int b) {
    for(int i=max(a, b); true ; i++) {
        if(i%a==0 && i%b == 0) {
            return i;
        }
    }
    return 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        for(int i=1; i<n; i++) {
            if((calculateGCD(n-i, i) + calculateLCM(n-i, i)) == n) {
                cout << n-i << " " << i << "\n";
                break;
            }
        }
    }
    return 0;
}
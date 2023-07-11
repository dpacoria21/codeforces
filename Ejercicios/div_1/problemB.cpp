#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;
typedef vector<int>vi;
typedef pair <int, int> pi;

bool isPrime(int a) {
    if(a==1) {
        return false;
    }
    for(int i=2; i<a; i++) {
        if(a%i==0) {
            return false;
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        vector<ll>arr(n);
        arr[0] = 2;
        arr[n-1] = 3;
        arr[n/2] = 1;
        ll count = 4;
        for(int i=1; i<n-1; i++) {
            if(i==n/2) {
                continue;
            };
            arr[i] = count;
            count++;
        }
        for(int i=0; i<n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
        
    }
    return 0;
}
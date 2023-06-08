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
    int t; cin >> t;
    while(t--) {
        bool flag = true;
        ll n; cin >> n;
        ll save = n;
        ll f, i=0;
        while(n!=0) {
            f = n;
            n = (n-n%10)/10;
            i++;
        }
        ll aux = f;
        for(int j=1; j<i; j++) {
            aux += pow(10, j)*f;
        }
        if(save >= aux){
            cout << (i-1)*9 + f << "\n";
        }else {
            cout << (i-1)*9 + (f-1) << "\n";
        }
    }
    return 0;
}
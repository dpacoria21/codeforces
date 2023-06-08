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
    int a, b;
    cin >> a >> b;
    int res = 0;
    while(a != 0) {
        if(a/b > 0) {
            res+=b;
            a-=b;
            a++;
        }else {
            res+=a;
            a-=a;
        }
    }
    cout << res;
    return 0;
}
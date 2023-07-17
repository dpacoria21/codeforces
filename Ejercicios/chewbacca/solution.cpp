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
    list<int>number;
    ll n; cin >> n;
    ld aux = n;
    ld res = 0;
    ld i = 0;
    while(n!=0) {
        ld u = n%10;
        n-=u;
        n/=10;
        if(u >= 5) {
            u = 9-u;
            if(n==0 && u == 0) {
                number.push_front(9-u);
            }else {
                number.push_front(u);
            }
        }else {
            number.push_front(u);
        }
    }
    list<int>::iterator it;
    for(it=number.begin(); it != number.end(); ++it) {
        cout << *it << "";
    }
    return 0;
}
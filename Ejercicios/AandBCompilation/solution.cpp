#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int n; cin >> n;
    ll sum1 = 0;
    ll sum2 = 0;
    ll sum3 = 0;
    for(int i=0; i<n; i++) {
        int aux; cin >> aux;
        sum1+=aux;
    }
    for(int i=0; i<n-1; i++) {
        int aux; cin >> aux;
        sum2+=aux;
    }
    for(int i=0; i<n-2; i++) {
        int aux; cin >> aux;
        sum3+=aux;
    }
    cout << sum1-sum2 << "\n";
    cout << sum2-sum3;
    return 0;
}
#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int n; cin >> n;
    int save = 2;
    int ward = n;
    ll acc = n;
    for(int i=n-2; i>0; i--) {
        acc += i*save;
        save++;
    }
    cout << acc+n-1;
    return 0;
}
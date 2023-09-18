#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int maxi = 0;
    int index = -1;
    for(int i=1; i<=n; i++) {
        ld a; cin >> a;

        if( (ll)(ceil(a/m)) >= maxi) {
            maxi = (ll)(ceil(a/m));
            index = i;
        } 
    }
    cout << index;
    return 0;
}
#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int n; cin >> n;
    int dig = 0, i = 0;
    while(i<2) {
        dig = n%10;
        n = (n-dig)/10;
        i++;
    }
    cout << dig;
    return 0;
}

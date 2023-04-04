#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <string>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >>n>>k>>l>>c>>d>>p>>nl>>np;
    int drink = k*l;
    int slices = c*d;
    cout << min(drink/nl, min(p/np, slices)) / n;
    return 0;
}
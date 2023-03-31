#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <string>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if(a > b) {
        cout << b << " " << floor((a-b)/2);
    }else {
        cout << a << " " << floor((b-a)/2);
    }
    return 0;
}
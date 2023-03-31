#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <string>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    string a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    a = a+b;
    sort(a.begin(), a.end());
    sort(c.begin(), c.end());
    if(a == c) {
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}

#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <string>

using ll = long long;
using ld = long double;
using namespace std;

int main() {

    int n, m;
    cin >> n >> m;

    int res = min(n, m);
    int p;
    bool win = true;


    while(true) {

        (m>0) ? m-- : m=0;
        (n>0) ? n-- : n=0;

        p = m*n;

        if(p == 0) {
            break;
        }

        win = !win;

    }

    if(win) {
        cout << "Akshat";
    }else {
        cout << "Malvika";
    }

    return 0;
}
#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <string>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    cout << max(x1, max(x2, x3)) - min(x1, min(x2, x3));
    // int mid = x1;
    // if( (x1 > x2 && x1 < x3) || (x1 > x3 && x1 < x2 ) ) {
    //     if(x2 > x3) {
    //         cout << x2-x3;
    //     }else {
    //         cout << x3-x2;
    //     }
    // }else if( (x2 > x1 && x2 < x3) || (x2 > x3 && x2 < x1 ) ) {
    //     if(x1 > x3) {
    //         cout << x1-x3;
    //     }else {
    //         cout << x3-x1;
    //     }
    // }else if ( (x3 > x2 && x3 < x1) || (x3 > x1 && x3 < x2 ) ) {
    //     if(x2>x1) {
    //         cout << x2-x1;
    //     }else {
    //         cout << x1-x2;
    //     }
    // }
    return 0;
}
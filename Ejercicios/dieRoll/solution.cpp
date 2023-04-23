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
    int valM = max(a, b);
    int num = 6-(valM-1);
    int total = 6;
    if(num%2 == 0 && total%2 == 0) {
        num/=2; total/=2;
    }
    if(num%3 == 0 && total%3 == 0) {
        num/=3; total/=3;
    }
    if(valM == 6) {
        cout << 0 << "/" << 1;
    }else if(valM ==1) {
        cout << 1 << "/" << 1;
    }else {
        cout << num << "/" << total;
    }
    return 0;
}
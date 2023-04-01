#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <string>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int k, r;
    cin >> k >> r;
    int i=1;
    while(true) {
        int res = i*k;
        if((i*k)%10 == r || (i*k)%10 == 0) {
            cout << i;
            break;
        }
        i++;
    }
    return 0;
}
#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <string>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int n; cin >> n;
    
    for(int i=0; i < n/2 -1; i++) {
        cout << 2 << " ";
    }
    if(n%2 == 0) {
        cout << 2;
    }else {
        cout << 3;
    }
    
    return 0;
}
#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <string>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int n, k, y;
    cin >> n >> k;
    int count = 0;
    for(int i=0; i<n; i++) {
        cin >> y;
        if(y+k <= 5) {
            count++;
        }
    }

    cout << count/3;


    return 0;
}
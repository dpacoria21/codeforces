#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;
using ll = long long;
using ld = long double;
typedef vector<int>vi;
typedef pair <int, int> pi;

int main() {
    int x; cin >> x;
    ll b = 1;
    int count = 0;
    while(x != 0) {
        if(b*2 > x) {
            x -= b;
            count++;
            b=1;
            continue;
        }
        b = b*2;
    }
    cout << count;
    return 0;
}
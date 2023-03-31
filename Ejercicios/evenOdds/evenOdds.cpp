#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <string>

using ll = long long;
using ld = long double;
using namespace std;

// ceil, floor, etc, con numeros muy grandes los convierte a int y no puedes seguir trabajando correctamente, mejor usar un if y un else para aumentar en 1 en caso de que sea par o impar

int main() {
    ll k, n, mid;
    cin >> k >> n;
    if(k%2 == 0) {
        mid = k/2;
    }else {
        mid = k/2 +1;
    }
    if(n > mid) {
        n = n-mid;
        cout << 2+(2*(n-1));
    }else {
        cout << 1+(2*(n-1));
    }
}
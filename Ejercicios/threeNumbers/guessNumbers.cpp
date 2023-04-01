#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <string>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    vector<ll>arr;
    for(int i=0; i<4; i++) {
        int aux;
        cin >> aux;
        arr.push_back(aux); 
    }
    ll a, b, c;
    sort(arr.begin(), arr.end());
    a = arr[3] - arr[0];
    b = arr[1] - a;
    c = arr[3] - a - b;
    cout << a << " " << b << " " << c;
    
    return 0;
}
#include <iostream>
#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    ll n;
    cin >> n;
    if(n%2==0){
        cout << n/2;
    }else {
        cout << -1*(n/2+1);
    }
    return 0;
}
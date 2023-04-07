#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <string>
 
using ll = long long;
using ld = long double;
using namespace std;
 
int main() {
    ll t; cin >> t;
    ll n, k;
    while(t--) {
        cin >> n >> k;
        if(k%2==0 && n%2) {
            cout<<"NO"<<endl;
        }else {
            cout << "YES" <<endl;
        }
    }
    return 0;
}
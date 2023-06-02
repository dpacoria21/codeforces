#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <string>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int arr[n];
        int pares = 0;
        int impares = 0;
        int parMin = INT_MAX;
        int imparMin = INT_MAX;
        for(int i=0; i<n; i++) {
            cin >> arr[i];
            if(arr[i]%2==0) {
                parMin = min(parMin, arr[i]);                
                pares++;
            }else {
                imparMin = min(imparMin, arr[i]);
                impares++;
            }
        }
        if(pares==0) {
            cout << "YES" << "\n";
        }else if(impares==0) {
            cout << "YES" << "\n";
        }else if(impares > pares) {
            if(imparMin < parMin) {
                cout << "YES" << "\n";
            }else {
                cout << "NO" << "\n";
            }
        }else if (pares > impares){
            if(parMin < imparMin) {
                cout << "NO" << "\n";
            }else {
                cout << "YES" << "\n";
            }
        }else if(pares == impares) {
            if(parMin > imparMin) {
                cout << "YES" << "\n";
            }else {
                cout << "NO" << "\n";
            }
        }
    }
    return 0;
}
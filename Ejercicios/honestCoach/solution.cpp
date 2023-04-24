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
        for(int i=0; i<n; i++) {
            cin >> arr[i];
        }
        sort(arr, arr+n);
        int m = abs(arr[0]-arr[1]);
        for(int i=1; i<n-1; i++){
            m = min(m, abs(arr[i]-arr[i+1]));
        }
        cout << m << "\n";
    }
    return 0;
}
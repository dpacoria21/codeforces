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
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int arr[n+1];
        for(int i=0; i<n; i++) {
            cin >> arr[i];
        }
        sort(arr, arr+n);
        cout << arr[n-1]-arr[0] << "\n";
    }
    return 0;
}
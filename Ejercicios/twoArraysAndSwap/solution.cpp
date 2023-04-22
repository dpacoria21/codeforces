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
        int n, k;
        cin >> n >> k;
        int a[n];
        int b[n];
        for(int i=0; i<n; i++) {
            cin >> a[i];
        }
        for(int i=0; i<n; i++) {
            cin >> b[i];
        }
        sort(a, a+n);
        sort(b, b+n);
        int sum = 0;
        for(int i=0; i<n; i++) {
            if(k>i && b[n-(i+1)] > a[i]) {
                a[i] = b[n-(i+1)];
            }
            sum = sum+a[i];
        }
        cout << sum << "\n";
    }
    return 0;
}
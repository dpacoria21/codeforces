#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <string>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin >> n;
        int arr[n];
        int even = 0, odd = 0;
        for(int i=0; i<n; i++) {
            int a1;
            cin >> a1;
            arr[i] = a1%2;
            if(arr[i] == 0) {
                even++;
            }else {
                odd++;
            }
        }
        if(n/2 != odd) {
            cout << -1 << endl;
        }else {
            int is0 = 0, is1 = 0;

            for(int i=0; i<n; i++) {
                if(i%2 != arr[i] && arr[i] == 0) {
                    is0++;
                }else if(i%2 != arr[i] && arr[i] == 1) {
                    is1++;
                }
            }
            cout << min(is0, is1) + abs(is0 - is1) << endl;
        }
    }
    return 0;
}
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
        int n; cin>>n;
        int arr[n];
        int arr2[n];
        for(int i=0; i<n; i++) {
            cin >> arr[i];
            arr2[i] = arr[i];
        }
        int el;
        sort(arr, arr+n);
        if(arr[0] == arr[1]) {
            el = arr[n-1];
        }else{
            el = arr[0];
        }
        for(int i=0; i<n; i++) {
            if(arr2[i] == el) {
                cout << i+1 << endl;
                break;
            }
        }
    }
    return 0;
}
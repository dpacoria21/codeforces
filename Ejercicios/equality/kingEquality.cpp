#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <string>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int n; cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    int max = arr[n-1];
    if(n==1) {
        cout << 0;
    }else {
        int count = 0;
        for(int i=0; i<n; i++) {
            count += max-arr[i];
        }
        cout << count;
    }
    return 0;
}
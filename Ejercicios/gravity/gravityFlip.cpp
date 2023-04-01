#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <string>
#include <algorithm>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    /* int n; cin >> n;
    vector <int> arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    for(int i=n-1; i>=0; i--) {
        int maxi = INT_MIN;
        int idx_max = -1;
        for(int j=i; j>=0; j--) {
            if(arr[j] > maxi) {
                maxi = arr[j];
                idx_max = j;
            }
        }
        arr[idx_max] -= (maxi-arr[i]);
        arr[i] = maxi;
    }
    for(auto a: arr) {
        cout << a <<" ";
    } */
    int n; cin >> n;
    vector<int>arr;
    for(int i=0; i<n; i++) {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    sort(arr.begin(), arr.end());
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}
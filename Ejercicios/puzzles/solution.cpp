#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <string>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr[m];
    for(int i=0; i<m; i++) {
        cin >> arr[i];
    }

    sort(arr, arr+m);

    int min = INT_MAX;
    for(int i = 0; i< abs(m-n)+1; i++) {
        if(min > abs(arr[i] - arr[i+n-1])) {
            min = abs(arr[i] - arr[i+n-1]);
        }
    }

    cout << min;
    return 0;
    
}
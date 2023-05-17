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
    int m, n;
    cin >> m >> n;
    int arr[m];
    for(int i=0; i<m; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+m);
    int sumMax = 0;
    for(int i=0; i<n; i++) {
        if(arr[i] <= 0) {
            sumMax = max(sumMax+abs(arr[i]), sumMax);
        }else {
            sumMax = max(sumMax, sumMax-arr[i]);
        }
    }
    cout << sumMax;
    return 0;
}
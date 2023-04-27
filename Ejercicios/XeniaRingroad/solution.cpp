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
    int n, m;
    cin >> n >> m;
    int arr[m];

    ll res;
    cin >> arr[0];
    res = arr[0]-1;
    for(int i=1; i<m; i++) {
        cin >> arr[i];
        if(arr[i-1] <= arr[i]) {
            res += arr[i] - arr[i-1];
        }else {
            res += n-arr[i-1] + arr[i];
        }
    }
    cout << res;
    return 0;
}
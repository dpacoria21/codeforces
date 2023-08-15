#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int n; cin >> n;
    int arr[n][n];
    for(int i=0; i<n; i++) {
        arr[0][i] =1 ;
        arr[i][0] = 1;
    }
    int maxi = 1;
    for(int i=1; i<n; i++) {
        for(int j=1; j<n; j++) {
            arr[i][j] = arr[i-1][j] + arr[i][j-1];
            maxi = max(arr[i][j], maxi);
        }
    }
    cout << maxi;
    return 0;
}
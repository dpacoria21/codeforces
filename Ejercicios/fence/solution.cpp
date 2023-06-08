#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int total = INT_MAX;
    int sum = 0;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
        if(i<k && i>=0) sum+=arr[i];
    }
    int res = 0;
    for(int i=k; i<n; i++) {
        if(k == 1) {
            if(sum > arr[i]) {
                sum = arr[i];
                res = i-k+1;
            }
        }else if(k==2) {
            if(sum > arr[i]+arr[i-1]) {
                sum = arr[i]+arr[i-1];
                res = i-k+1;
            }
        }else{
            if(sum > sum-arr[i-k]+arr[i]) {
                sum = sum-arr[i-k]+arr[i];
                res = i-k+1;
            }
        }
    }

    cout << res+1;

    return 0;
}
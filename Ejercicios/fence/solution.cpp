#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int tn = 0;

    for(int i=0; i<k; i++) {
        tn+=arr[i];
    }

    int res = tn;

    int index = 1;

    for(int i=k; i<n; i++) {
        tn = tn-arr[i-k]+arr[i];
        if(tn < res) {
            index = i-k+2;
            res = tn;
        }
    }
    cout << index;
    
    return 0;
}
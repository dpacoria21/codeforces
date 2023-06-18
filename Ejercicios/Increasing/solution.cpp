#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int arr[n];
        bool flag = true;
        for(int i=0; i<n; i++) {
            cin >> arr[i];
        }

        sort(arr, arr+n);

        for(int i=0; i<n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
        
    }
    return 0;
}
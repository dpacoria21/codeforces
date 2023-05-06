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
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int arr[n];
        for(int i=0; i<n; i++) {
            cin >> arr[i];
        }

        int maxi = 0;
        int count = 0;

        for(int i=0; i<n; i++) {
            if(arr[i] == 0) {
                count++;
                maxi = max(maxi, count);
            }else {
                count = 0;
            }
        }
        cout << maxi << "\n";
    }
    return 0;
}
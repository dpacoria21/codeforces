#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <string>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int t, n, a;
    cin >> t;
    for(int i=0; i<t; i++) {
        cin >> n;
        vector<int>arr;
        for(int j=0; j<n; j++) {
            cin >> a;
            arr.push_back(a);
        }

        sort(arr.begin(), arr.end());
        int count = 0;
        int aux = arr[0];
        for(int j=1; j<n; j++) {
            if(abs(aux - arr[j]) <= 1) {
                if(aux <= arr[j]) {
                    aux = arr[j];
                }
                count++;
            }
        }
        if(n-count == 1) {
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
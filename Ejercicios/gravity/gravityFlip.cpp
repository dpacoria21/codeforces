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
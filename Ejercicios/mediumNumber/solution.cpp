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
    int n; cin >> n;
    while(n--) {
        int a, b ,c;
        int arr[3];
        for(int i=0; i<3; i++) {
            cin >> arr[i];
        }
        sort(arr, arr+3);
        cout << arr[1] << '\n';
    }
    return 0;
}
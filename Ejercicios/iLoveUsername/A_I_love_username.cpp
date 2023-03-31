#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <string>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int lower, upper;
    lower = upper = arr[0];
    int count = 0;
    for(int i=1; i<n; i++) {
        if(upper < arr[i]) {
            count++;
            upper = arr[i];
        }else if(lower > arr[i]) {
            count++;
            lower = arr[i];
        }
    }
    cout << count;
    return 0;
}
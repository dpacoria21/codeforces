#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <string>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int n; cin >> n;
    int arr[2] = {0, 0};
    int m, c;
    while(n--) {
        cin >> m >> c;
        if(m > c) {
            arr[0]++;
        }else if(m < c) {
            arr[1]++;
        }
    }

    if(arr[0] < arr[1]) {
        cout << "Chris";
    }else if(arr[0] > arr[1]) {
        cout << "Mishka";
    }else{
        cout << "Friendship is magic!^^";
    }
    return 0;
}
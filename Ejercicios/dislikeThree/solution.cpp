#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <string>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int t; cin >> t;
    int k;
    int arr[1001];
    int index = 1;
    for(int i=1; index<=1000; i++) {
        if(i%3== 0 || i%10 == 3 ) {
            continue;
        }
        arr[index] = i;
        index++;
    }

    while(t--) {
        cin >> k;
        cout << arr[k] << endl;
    }
    return 0;
}
#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <string>

using ll = long long;
using ld = long double;
using namespace std;

int main() {

    // Primera forma
    ll n;
    ll arr[5] = {1, 5, 10, 20, 100};
    cin >> n;
    int i=4;
    ll count = 0;
    while(n != 0) {
        count += floor(n/arr[i]);
        n = n-arr[i]*(floor(n/arr[i]));
        i--;
    }
    cout << count; 

    // Segunda forma
    /* ll n, count = 0;
    cin >> n;
    while(n != 0) {
        if(n>=100) {
           count++;
           n -= 100; 
        }else if(n >= 20) {
            count++;
            n -= 20;
        }else if(n >= 10) {
            count++;
            n -= 10;
        }else if(n >= 5) {
            count++;
            n -= 5;
        }else {
            count += n;
            n = 0;
        }
    }
    cout << count; */
    return 0;
}
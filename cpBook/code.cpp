#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <string>

// using ll = long long;
using namespace std;
typedef long long ll;
typedef vector<int>vi;
typedef pair <int, int> pi;
using ld = long double;

int main() {
    double x = 0.3*3+0.1;
    printf("%.20f\n", x);

    ll a = 123456789;
    ll b = 987654321;
    cout << a*b << "\n";

    vi arr;
    for(int i=0; i<10; i++) {
        arr.push_back(i);
    }

    for(int i=0; i<10; i++) {
        cout << arr[i] << " ";
    }
    

    return 0;
}
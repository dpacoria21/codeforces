#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <string>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    double n;
    cin >> n;
    double pi;
    double sum = 0;
    for(double i=0; i<n; i++) {
        cin >> pi;
        sum += pi/100;
    }

    string variables = to_string((int)(sum));
    
    sum = sum/n*100;

    cout << setprecision(variables.size()+13);


    cout << sum;
    return 0;
}
#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <string>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int s, n;
    cin >> s >> n;
    bool flag = true;
    while(n--) {
        int ds, dn;
        cin >> ds >> dn;
        if(s > ds) {
            s+=dn;
        }else {
            flag = false;
            break;
        } 
    }
    if(flag) {
        cout << "YES";
    }else {
        cout << "NO";
    }
    return 0;
}
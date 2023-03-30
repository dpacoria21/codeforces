#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <string>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    string n;
    getline(cin, n);
    string chars = "{}, ";    

    for(char c: chars) {
        n.erase(remove(n.begin(), n.end(), c), n.end());
    }

    sort(n.begin(), n.end());

    ll count = 0;

    for(int i=0; i<n.size(); i++) {
        if(n[i] != n[i+1]) {
            count++;
        }
    }

    cout << count;

    return 0;
}

#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <string>
#include <map>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    string p;
    bool flag = false;
    cin >> p;
    for(char c: p) {
        if(c == 'H' || c== 'Q' || c=='9') {
            flag = true;
            break;
        }
    }
    if(flag) {
        cout << "YES";
    }else {
        cout << "NO";
    }
    /* map<char, int>letters;
    bool flag = false;
    letters['H'] = 1;
    letters['Q'] = 2;
    letters['9'] = 4;
    cin >> p;
    for(char c: p) {
        if(letters[c] != 0) {
            flag = true;
            break;
        }
    }
    if(flag) {
        cout << "YES";
    }else {
        cout << "NO";
    } */
    return 0;
}
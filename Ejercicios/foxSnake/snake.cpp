#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <string>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int n, m;
    bool flag = true;
    cin >> n >> m;
    for(int i=0; i<n; i++) {
        if(i%2==0) {
            for(int j=0; j<m; j++) {
                cout << "#";
            }
            cout << endl;
        }else {
            if(flag) {
                for(int j=0; j<m-1; j++) {
                    cout << ".";
                }
                cout << "#" << endl;
            }else {
                cout << "#";
                for(int j=1; j<m; j++) {
                    cout << ".";
                }
                cout << endl;
            }
            flag = !flag;
        }
    }
    return 0;
}
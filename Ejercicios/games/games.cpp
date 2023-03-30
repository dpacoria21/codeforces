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
    int a, b;
    cin >> n;
    int vis[n];
    int gue[n]; 
    for(int i=0; i<n; i++) {
        cin >> a >> b;
        vis[i] = a;
        gue[i] = b;
    }

    int count = 0;

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(vis[i] == gue[j]) {
                count++;
            }
        }
    }

    cout << count;

    return 0;
}
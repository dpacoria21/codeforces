#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <string>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    ll n, count = 0;
    string word;
    cin >> n;
    for(ll i=0; i<n; i++) {
       cin >> word;
       if(word == "Tetrahedron") {
        count+=4;  
       }else if(word == "Cube") {
        count+=6;
       }else if(word == "Octahedron") {
        count+=8;
       }else if(word  == "Dodecahedron") {
        count+=12;
       }else if(word == "Icosahedron"){
        count += 20;
       }
    }
    cout << count;
    return 0;
}
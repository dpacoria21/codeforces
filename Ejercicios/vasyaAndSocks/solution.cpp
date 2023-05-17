#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;
using ll = long long;
using ld = long double;
typedef vector<int>vi;
typedef pair <int, int> pi;

int main() {
    int n, m;
    cin >> n >> m;
    int i=1;
    int count = 0;
    while(n!=0) {
        n--;
        if(i%m == 0){
            n++;
        }
        i++;
        count++;
    }
    cout << count;
    return 0;
}
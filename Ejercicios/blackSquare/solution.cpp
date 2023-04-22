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
    int a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;
    int arr[4] = {a1, a2, a3, a4};
    string s; cin >> s;
    int sum = 0;
    for(int i=0; i<s.size(); i++) {
        sum += arr[(s[i]-'0')-1];
    }
    cout << sum;
    return 0;
}
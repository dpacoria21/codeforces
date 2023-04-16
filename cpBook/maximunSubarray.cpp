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
    vi arr = {-1, 2, 4, -3, 5, 2, -5, 2};
    // ll best = 0;
    // for(int i=0; i<arr.size(); i++) {
    //     ll sum = 0;
    //     for(int j=i; j<arr.size(); j++) {
    //         sum += arr[j];
    //         best = max(best, sum);
    //     }
    //     cout << best << " ";
    // }
    int best = 0;
    int sum = 0;
    for(int i=0; i<arr.size(); i++) {
        sum = max(arr[i], sum+arr[i]);
        best = max(best, sum);
    }
    cout << best;
    return 0;
}
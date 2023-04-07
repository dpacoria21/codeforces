#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <string>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int n; cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int s=0, d=0;
    bool turn = true;
    int start = 0, end = n-1;
    for(int i=0; i<n; i++) {
        int sum;
        if(arr[start] > arr[end]) {
            sum = arr[start];
            start++;
        }else {
            sum = arr[end];
            end--;
        }

        turn ? s+=sum : d+=sum;

        turn = !turn;

    }

    cout << s << " " << d;
    return 0;
}
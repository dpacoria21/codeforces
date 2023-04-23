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
    vector<pair<int, int>>arr;
    bool flag = true;
    for(int i=0; i<n; i++) {
        int ds, dn;
        cin >> ds >> dn;
        arr.push_back(make_pair(ds, dn));

    }
    sort(arr.begin(), arr.end());

    for(int i=0; i<n; i++) {
        if(s > arr[i].first) {
            s+=arr[i].second;
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

}
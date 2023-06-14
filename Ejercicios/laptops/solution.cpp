#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int n; cin >> n;
    bool flag = false;
    vector<pair<int, int>>lap;
    for(int i=0; i<n-1; i++) {
        int a, b;
        cin >> a >> b;
        lap.push_back(make_pair(a, b));
    }
    sort(lap.begin(), lap.end());
    pair<int, int> lap1, lap2;
    int mini = INT_MAX, maxi=INT_MIN;
    for(int i=0; i<n-1; i++) {
        if(mini > lap[i].second) {
            mini = lap[i].second;
            lap1 = lap[i];
        }
        if(maxi < lap[i].second) {
            maxi = lap[i].second;
            lap2 = lap[i];
        }
    }
    if(mini < maxi && lap1.first < lap2.first) {
        cout << "Happy Alex";
    }else {
        cout << "Poor Alex";
    }
}
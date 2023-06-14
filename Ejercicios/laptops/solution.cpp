#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int n; cin >> n;
    bool flag = false;
    vector<pair<int, int>>lap;
    for(int i=0; i<n; i++) {
        int a, b;
        cin >> a >> b;
        lap.push_back(make_pair(a, b));
    }
    sort(lap.begin(), lap.end());
    int mini;
    pair<int, int>aux = lap[0];
    for(int i=1; i<n; i++) {
        if(aux.second > lap[i].second) {
            flag = true;
            break;
        }else {
            aux = lap[i];
        }
    }
    if(flag) {
        cout << "Happy Alex";
    }else {
        cout << "Poor Alex";
    }
    
}
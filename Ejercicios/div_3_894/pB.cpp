#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int>arr;
        vector<int>res;
        for(int i=0; i<n; i++) {
            int a; cin >> a;
            arr.push_back(a);
        }
        res.push_back(arr[0]);
        for(int i=1; i<arr.size(); i++) {
            if(arr[i] >= arr[i-1]) {
                res.push_back(arr[i]);
            }else {
                res.push_back(arr[i]);
                res.push_back(arr[i]);
            }
        }
        cout << res.size() << "\n";
        for(int i=0; i<res.size(); i++) {
            cout << res[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
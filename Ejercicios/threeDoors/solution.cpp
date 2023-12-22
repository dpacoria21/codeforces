#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int t; cin >>t;
    while(t--) {
        int x; cin >> x;
        vector<int>keys;
        keys.push_back(x);
        int arr[4];
        for(int i=1; i<=3; i++) {
            cin>>arr[i];
        }
        while(x!=0) {
            if(arr[keys.back()]!=0) {
                keys.push_back(arr[keys.back()]);
            };
            x = arr[keys.back()];
        }
        if(keys.size()==3){
            cout << "YES\n";
        }else {
            cout << "NO\n";
        }
    }
    return 0;
}

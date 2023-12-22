#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        vector<int>arr = {1,2,3,4,5,6,7,8,9};
        stack<int>res;
        int n; cin >> n;
        for(int i=arr.size()-1; i>=0; i--) {
            if(arr[i]<=n){
                n-=arr[i];
                res.push(arr[i]);
            }
        }
        while(res.size()!=0) {
            cout << res.top() << "";
            res.pop();
        }
        cout << "\n";
    }
    return 0;
}

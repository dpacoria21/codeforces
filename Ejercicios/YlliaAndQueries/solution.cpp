#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    string s; cin >> s;
    int q; cin >> q;
    int arr[s.size()+1];
    arr[1] = 0;
    int sum = 0;
    for(int i=1; i<=s.size()-1;i++) {
        if(s[i-1] == s[i]) {
            sum++;
            arr[i+1] = sum; 
        }else {
            arr[i+1] = sum;
        }
    }
    while(q--) {
        int l, k;
        cin >> l >> k;
        cout << arr[k] - arr[l] << "\n";
    }
    return 0;
}
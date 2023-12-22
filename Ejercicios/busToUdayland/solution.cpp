#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int n; cin>>n;
    bool flag = false;
    vector<string>res;
    for(int i=0; i<n; i++) {
        string row; cin >> row;
        if(flag){
            res.push_back(row);
            continue;
        }
        if(row[0]=='O' && row[1]=='O') {
            row[0] = '+';
            row[1] = '+';
            flag = true;
            res.push_back(row);
            continue;
        }
        if(row[3]=='O' && row[4]=='O') {
            row[3]='+';
            row[4]='+';
            flag = true;
            res.push_back(row);
            continue;
        }
        res.push_back(row);
    }
    if(flag) {
        cout << "YES\n";
        for(int i=0; i<res.size(); i++) {
            cout << res[i] << "\n";
        }
    }else {
        cout << "NO\n";
    }
    return 0;
}

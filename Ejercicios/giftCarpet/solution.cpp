#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        queue<char>name;
        name.push('v');
        name.push('i');
        name.push('k');
        name.push('a');
        int n,m;
        cin>>n>>m;
        char arr[n][m];
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                cin>>arr[i][j];
            }
        }
        bool flag = false;
        for(int i=0; i<m; i++) {
            for(int j=0; j<n;j++) {
                // cout << arr[j][i] << " " << name.front() << "\n";
                if(arr[j][i]==name.front()) {
                    name.pop();
                    if(name.size()==0) {
                        flag = true;
                        break;
                    }
                    break;
                }
            }
            if(flag){
                break;
            }
        }
        if(flag) {
            cout << "YES\n";
        }else {
            cout << "NO\n";
        }
    }
    return 0;
}

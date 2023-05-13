#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;
using ll = long long;
using ld = long double;
typedef vector<int>vi;
typedef pair <int, int> pi;

int main() {
    int n, m;
    cin >> n >> m;
    if(m<=n || m%2==0) {
        cout << "NO";
    }else {

        bool flag = true;
        for(int i=n+1; i<=m; i++) {
            int count = 0;
            for(int j=1; j<=m; j++) {
                if(i%j == 0) {
                    count++;
                }
            }
            if(count==2 && i==m) {
                flag = true;
                break;
            }else if(count ==2 && i!=m) {
                flag = false;
                break;
            }
            else {
                flag = false;
            }
        }
        if(flag) {
            cout << "YES";
        }else {
            cout << "NO";
        }
    }
    return 0;
}
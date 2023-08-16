#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int n; cin >> n;
    map<int, int>valid;
    valid[1] = 1;
    valid[14] = 1;
    valid[144] = 1;
    int i=0;
    int acc = 0;
    bool flag = true;
    while(n!=0) {
        
        int aux = n%10;
        if(aux==1 || aux==4) {
            n = (n-aux)/10;
            acc += aux*pow(10, i);
            i++;
            if(valid[acc]) {
                acc = 0;
                i=0;
            }else if(i>=3) {
                flag = false;
                break;
            }
        }else {
            flag = false;
            break;
        }
    }

    if(flag && acc==0) {
        cout << "YES";
    }else {
        cout << "NO";
    }
    return 0;
}
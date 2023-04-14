#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <string>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    string s; cin >> s;
    int n = s.size();
    bool flag = false;
    for(int i=0; i<n; i++) {

        string aux = s.substr(0,3);
        if(aux == "WUB") {
            s = s.substr(3, s.size());
            i+=2;
        }else {
            for(int i=0; i<s.size(); i++) {
                string aux2 = s.substr(i, 3);
                if(aux2 == "WUB") {
                    cout << s.substr(0, i) << " ";
                    s = s.substr(i, s.size());
                    break;
                }
            }
        } 
       

        /* 
        
            Other solution

            string aux = s.substr(i,3);
            if(aux == "WUB") {
                i+=2;
                if(flag) {
                    cout << " ";
                }
            }else {
                flag = true;
                cout << s[i];
            } 
        
        */
    }
    cout << s;
    return 0;
}
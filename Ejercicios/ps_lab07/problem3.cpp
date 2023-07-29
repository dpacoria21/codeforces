#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    try {
        string nums = " 1234567890";
        string value;
        getline(cin, value);
        bool flag = true;
        for(int i=0; i<value.size(); i++) {
            if(nums.find(value[i]) > 10 || nums.find(value[i]) < 1) {
                flag = false;
            }
        }
        if(flag) {
            cout << "El dato es un numero: " << stoi(value);
        }else {
            throw value;
        }

    }catch(string value) {
        cout << "El valor del dato no es un numero: " << value;
    }
    return 0;
}
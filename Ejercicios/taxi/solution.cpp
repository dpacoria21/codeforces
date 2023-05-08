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
    int n; cin >> n;
    int arr[4] = {0, 0, 0, 0};
    for(int i=0; i<n; i++) {
        int a; cin >> a;
        if(a==1) {
            arr[0]++;
        }else if(a==2) {
            arr[1]++;
        }else if(a==3) {
            arr[2]++;
        }else {
            arr[3]++;
        }
    }    
    int res = arr[3];

    int mini = min(arr[0], arr[2]);
    res+= mini;
    arr[0]-=mini;
    arr[2]-=mini;
    
    if(arr[0] == 0){
        res += arr[2];
        res += arr[1]/2;
        arr[1] = arr[1] - (arr[1]/2)*2;
        res+= arr[1];
    }else if(arr[2] == 0) {
        res += arr[1]/2;
        arr[1] = arr[1] - (arr[1]/2)*2;
        if(arr[1] != 0){
            if(arr[0]/2 > 0) {
                res += arr[1];
                arr[0] -= 2;
            }else {
                res+=arr[1];
                arr[0]--;
            }
        }
        if(arr[0] > 0) {
            res+= ceil((double)arr[0]/4);
        }
    }

    cout << res;
    

    return 0;
}
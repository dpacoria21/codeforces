#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <string>
#include <map>

using namespace std;
using ll = long long;
using ld = long double;
typedef vector<int>vi;
typedef pair <int, int> pi;

int main() {

    map<char, int> up;
    map<int, char> upI;

    map<char, int> mid;
    map<int, char> midI;


    map<char, int> down;
    map<int, char> downI;
    upI[1] = 'q';
    upI[2] = 'w';
    upI[3] = 'e';
    upI[4] = 'r';
    upI[5] = 't';
    upI[6] = 'y';
    upI[7] = 'u';
    upI[8] = 'i';
    upI[9] = 'o';
    upI[10] = 'p';

    up['q'] = 1;
    up['w'] = 2;
    up['e'] = 3;
    up['r'] = 4;
    up['t'] = 5;
    up['y'] = 6;
    up['u'] = 7;
    up['i'] = 8;
    up['o'] = 9;
    up['p'] = 10;

    midI[1] = 'a';
    midI[2] = 's';
    midI[3] = 'd';
    midI[4] = 'f';
    midI[5] = 'g';
    midI[6] = 'h';
    midI[7] = 'j';
    midI[8] = 'k';
    midI[9] = 'l';
    midI[10] = ';';

    mid['a'] =   1;
    mid['s'] =   2;
    mid['d'] =   3;
    mid['f'] =   4;
    mid['g'] =   5;
    mid['h'] =   6;
    mid['j'] =   7;
    mid['k'] =   8;
    mid['l'] =   9;
    mid[';'] =   10;

    downI[1] = 'z';
    downI[2] = 'x';
    downI[3] = 'c';
    downI[4] = 'v';
    downI[5] = 'b';
    downI[6] = 'n';
    downI[7] = 'm';
    downI[8] = ',';
    downI[9] = '.';
    downI[10] = '/';

    down['z'] = 1;
    down['x'] = 2;
    down['c'] = 3;
    down['v'] = 4;
    down['b'] = 5;
    down['n'] = 6;
    down['m'] = 7;
    down[','] = 8;
    down['.'] = 9;
    down['/'] = 10;

    char c; cin >> c;
    int move = 0;
    if(c == 'R') {
        move = -1;
    }else {
        move = 1;
    }

    string s; cin >> s;

    for(char let: s) {
        if(up[let] != 0) {
            if(up[let]+move == 0 || up[let]+move == 11) {
                cout << upI[up[let]];
            }else {
                cout << upI[up[let]+move];
            }
        }else if(mid[let] != 0) {
            if(mid[let]+move == 0 || mid[let]+move==11) {
                cout << midI[mid[let]];
            }else {
                cout << midI[mid[let]+move];
            }
        }else{
            if(down[let]+move == 0 || down[let]+move == 11) {
                cout << downI[down[let]];
            }else {
                cout << downI[down[let]+move];
            }
        }
    }
    return 0;
}
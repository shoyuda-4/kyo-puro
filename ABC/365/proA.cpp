#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    int y;
    cin >> y;
    if(y%4 != 0){
        cout << 365 << endl;
    }
    else if(y%4 == 0 && y% 100 != 0){
        cout << 366 << endl;
    }
    else if(y%100 == 0 && y%400 != 0){
        cout << 365 << endl;
    }
    else if(y%400 == 0){
        cout << 366 << endl;
    }
}
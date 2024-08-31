#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    int a, b;
    cin >> a >> b;
    if(a == b){
        cout << 1 << endl;
        return 0;
    }
    if((a+b)%2 == 0){
        cout << 3 << endl;
    }
    else{
        cout << 2 << endl;
    }
}
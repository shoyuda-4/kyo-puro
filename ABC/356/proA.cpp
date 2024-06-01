#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    int n, l, r;
    cin >> n >> l >> r;
    rep2(i, 1, n+1){
        if(i == l){
            for(int j = r; j >= l; j--){
                cout << j << " ";
            }
            i = r;
        }
        else
            cout << i  << " ";
    }
    cout << endl;
}
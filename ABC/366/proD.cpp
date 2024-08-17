#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    int n;
    cin >> n;
    vector<vector<vector<int>>> a(n, vector<vector<int>>(n, vector<int>(n)));
    rep(i,n){
        rep(j,n){
            rep(k,n){
                if(k == 0){
                    cin >> a[i][j][k];
                }
                else{
                    int x;
                    cin >> x;
                    a[i][j][k] = a[i][j][k-1] + x;
                }
            }
        }
    }
    rep(i,n){
        rep(j,n){
            rep(k, n){
                if(j==0) continue;
                else{
                    a[i][j][k] += a[i][j-1][k];
                }
            }
        }
    }
    int q;
    cin >> q;
    int lx, rx, ly, ry, lz, rz;
    rep(i,q){
        ll sum = 0;
        cin >> lx >> rx >> ly >> ry >> lz >> rz;
        for(int j = lx-1; j <= rx-1; j++){
            sum += a[j][ry-1][rz-1];
            if(ly != 1){
                sum -= a[j][ly-2][rz-1];
            }
            if(rz != 1){
                sum -= a[j][ry-1][lz-2];
            }
            if(ly != 1 && lz != 1){
                sum += a[j][ly-2][lz-2];
            }
        }
        cout << sum << endl;
    }
}
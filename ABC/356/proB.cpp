#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    rep(i, m)
        cin >> a[i];
    vector<vector<int>> x(n, vector<int>(m));
    vector<int> sum(m, 0);
    rep(i,n){
        rep(j,m){
            cin >> x[i][j];
            sum[j] += x[i][j];
        }
    }
    rep(i, m){
        if(sum[i] < a[i]){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}   
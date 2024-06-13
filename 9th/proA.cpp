#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    vector<int> vec;
    while(1){
        int n, m;
        cin >> n >> m;
        if(n == 0 && m == 0)
            break;

        vector<vector<int>> p(m ,vector<int>(n));

        rep(i, m){
            rep(j, n){
                cin >> p[i][j];
            }
        }

        vector<int> sum(n, 0);
        rep(i, n){
            rep(j, m){
                sum[i] += p[j][i];
            }
        }
        sort(sum.begin(), sum.end());
        vec.push_back(sum[n-1]);
    }
    rep(i, vec.size())
        cout << vec[i] << endl;
    
}
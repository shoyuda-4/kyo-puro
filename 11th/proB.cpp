#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    vector<int> vec;
    while(1){
        int n, m, t, p;
        cin >> n >> m >> t >> p;
        if(n == 0 && m == 0 && t == 0 && p == 0)
            break;
        vector<pair<int, int>> a(t);
        vector<pair<int, int>> b(p);
        rep(i, t){
            int d, c;
            cin >> d >> c;
            a[i] = make_pair(d,c);
        }
        rep(i, p){
            int x, y;
            cin >> x >> y;
            b[i] = make_pair(x, y);
        }
        vector<vector<int>> c(m, vector<int>(n));
        rep(i, m){
            rep(j, n){
                c[i][j] = 1;
            }
        }
        int x = 0, y = 0;
        int count = 0;
        rep(i, t){
            if(a[i].first == 1){
                rep2(j, x, a[i].second+x){
                    rep2(k, y, m){
                        c[k][j+a[i].second] += c[k][j];
                    }
                }
                x += a[i].second;
            }
            else{
                rep2(j, x, n){
                    rep2(k, y, a[i].second+y){
                        c[k+a[i].second][j] += c[k][j];
                    }
                }
                y += a[i].second;
            }
            rep2(k, 0, c.size()){
                rep2(j, 0, c[0].size()){
                    cout << c[k][j];
                }
                cout << endl;
            }
        }
        rep(i, p){
            count = c[(b[i].second)+y][(b[i].first)+x];
            vec.push_back(count);
        }
    }
    rep(i, vec.size())
        cout << vec[i] << endl;
}
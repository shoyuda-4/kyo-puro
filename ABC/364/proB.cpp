#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    int h, w, si, sj;
    cin >> h >> w >> si >> sj;
    si--;
    sj--;
    vector<string> c(h);
    rep(i, h){
        cin >> c[i];
    }
    string x;
    cin >> x;
    rep(i, x.size()){
        if(x[i] == 'L'){
            if(sj != 0){
                if(c[si][sj-1] == '.'){
                    sj--;
                }
            }
        }
        else if(x[i] == 'R'){
            if(sj != w-1){
                if(c[si][sj+1] == '.'){
                    sj++;
                }
            }
        }
        else if(x[i] == 'U'){
            if(si != 0){
                if(c[si-1][sj] == '.'){
                    si--;
                }
            }
        }
        else if(x[i] == 'D'){
            if(si != h-1){
                if(c[si+1][sj] == '.'){
                    si++;
                }
            }
        }
    }
    cout << si+1 << " " << sj+1 << endl;
}
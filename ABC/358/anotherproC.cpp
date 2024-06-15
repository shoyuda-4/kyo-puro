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
    vector<int> b(n, 0);
    int all = 0, cnt = 0, ans = 0, anss = m;
    /*rep(i, m){
        all |= (1<<i);
    }*/
    all = (1<<m)-1;
    string s;
    rep(i, n){
        cin >> s;
        rep(j, m){
            if(s[j] == 'o'){
                b[i]|= (1<<j);
            }
        }
    }
    rep(i, (1<<n)){
        cnt = 0;
        ans = 0;
        rep(j, n){
            if((i >> j) & 1){
                cnt++;
                ans = (ans|b[j]);
            }
        }
        if(ans == all)
            anss = min(anss, cnt);

    }
    cout << anss << endl;

}
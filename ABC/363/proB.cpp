#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    int n, t, p, cnt = 0;
    cin >> n >> t >> p;
    vector<int> l(n);
    rep(i, n){
        cin >> l[i];
        if(l[i] >= t) cnt++;
    }
    if(cnt < p){
        sort(l.begin(), l.end(), [](int i, int j){
            return i > j;
        });
        cnt = t - l[p-1]; 
    }
    else{
        cnt = 0;
    }
    cout << cnt << endl;
}
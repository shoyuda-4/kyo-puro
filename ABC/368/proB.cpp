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
    vector<int> a(n);
    rep(i, n){
        cin >> a[i];
    }
    int cnt = 0;
    while(1){
        cnt++;
        sort(a.begin(), a.end(), [](int a, int b) {
            return a > b;
        });
        a[0]--;
        a[1]--;
        int pluscnt = 0;
        rep(i, n){
            if(a[i] > 0){
                pluscnt++;
            }
            if(pluscnt >= 2) break;
        }
        if(pluscnt <= 1) break;
    }
    cout << cnt << endl;
}
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
    vector<pair<int, string>> a(n);
    rep(i, n){
        int x;
        string s;
        cin >> x >> s;
        a[i] = make_pair(x,s);
    }
    int r = 0, l = 0, ans = 0;
    rep(i, n){
        if(a[i].second == "L"){
            if(l == 0){
                l = a[i].first;
            }
            else{
                ans += abs(l-a[i].first);
                l = a[i].first;
            }
        }
        if(a[i].second == "R"){
            if(r == 0){
                r = a[i].first;
            }
            else{
                ans += abs(r-a[i].first);
                r = a[i].first;
            }
        }
    }
    cout << ans << endl;

}
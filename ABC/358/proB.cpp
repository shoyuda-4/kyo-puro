#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    int n, a;
    cin >> n >> a;
    vector<int> t(n); 
    rep(i, n)
        cin >> t[i];
    int now = t[0] + a;
    cout << now << endl;
    rep2(i, 1, n){
        if(now > t[i]){
            now += a;
            cout << now << endl;
        }
        else{
            now = t[i] + a;
            cout << now << endl;
        }
    }
}
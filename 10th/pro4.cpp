#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    ll n, p = 0;
    cin >> n;
    vector<ll> a(n);
    rep(i, n)
        cin >> a[i];
    rep(i, n){
        if(a[i] >= 0){
            p += a[i];
        }
        else if(abs(a[i]) > p){
            p = 0;
        }
        else{
            p += a[i];
        }
    }
    cout << p << endl;
}
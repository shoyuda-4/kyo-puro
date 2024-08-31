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
    ll ans = 0;
    int d;
    int cnt = 0;
    rep(i, n-1){
        d = a[i+1] - a[i];
        ll j = i;
        while(j != n-1 && d == a[j+1] - a[j]){
            j++;
        }
        ans += ((j-i+1) * (j-i+2))/2;
        i = j-1;
        cnt++;
    }
    ans -= cnt-1;
    cout << ans << endl;
}
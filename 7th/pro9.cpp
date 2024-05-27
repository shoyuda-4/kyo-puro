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
    rep(i, n)
        cin >> a[i];
    sort(a.begin(), a.end());
    rep(i, n-1){
        if(a[i+1] - a[i] != 1){
            cout << a[i+1]-1 << endl;
            return 0;
        }
    }
    cout << 1 << endl;
}
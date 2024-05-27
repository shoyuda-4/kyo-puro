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
    vector<double> x(5*n);
    rep(i, 5*n){
        cin >> x[i];
    }
    sort(x.begin(), x.end());
    rep(i, n)
        x.pop_back();
    reverse(x.begin(), x.end());
    rep(i, n)
        x.pop_back();
    double sum = 0;
    rep(i, 3*n)
        sum += x[i];
    cout << sum/(3*n) << endl; 
}
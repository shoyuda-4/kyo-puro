#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    int n, s, d;
    cin >> n >> s >> d;
    vector<pair<int, int>> p(n);
    rep(i, n){
        int a, b;
        cin >> a >> b;
        p[i] = make_pair(a, b);
    }
    rep(i, n){
        if(p[i].first < s && p[i].second > d){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}
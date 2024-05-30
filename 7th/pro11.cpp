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
    vector<pair<int, int>> p(n);
    rep(i, n){
        int a;
        cin >> a;
        p[i] = make_pair(a, i+1);
    }
    sort(p.begin(), p.end(), [](pair<int, int> a, pair<int, int> b) {
        return a.first > b.first;
    });
    cout << p[1].second << endl;
}
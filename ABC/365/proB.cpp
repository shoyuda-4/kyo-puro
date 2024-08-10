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
    vector<pair<int, int>> a(n);
    rep(i, n){
        int x;
        cin >> x;
        a[i] = make_pair(x, i+1);
    }
    sort(a.begin(), a.end(), [](pair<int, int> a1, pair<int, int> a2) {
        return a1.first > a2.first; 
    });
    cout << a[1].second << endl;
}
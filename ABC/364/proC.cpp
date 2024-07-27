#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    int n; 
    ll x, y;
    cin >> n >> x >> y;
    vector<pair<int, int>> ab(n);
    rep(i, n){
        int a;
        cin >> a;
        ab[i].first = a;
    }
    rep(i, n){
        int a;
        cin >> a;
        ab[i].second = a;
    }
    sort(ab.begin(), ab.end(), [](pair<int, int> a, pair<int, int> b) {
        return a.first > b.first;
    });
    ll sum = 0;
    int cnt = 0;
    rep(i, n){
        sum += ab[i].first;
        if(sum > x || i == n-1){
            cnt = i+1;
            break;
        }
    }
    sort(ab.begin(), ab.end(), [](pair<int, int> a, pair<int, int> b) {
        return a.second > b.second;
    });
    sum = 0;
    rep(i, n){
        if(i == cnt) break;
        sum += ab[i].second;
        if(sum > y || i == n-1){
            cnt = min(cnt, i+1);
            break;
        }
    }
    cout << cnt << endl;

}
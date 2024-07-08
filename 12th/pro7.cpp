#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    int n, m;
    cin >> n >> m;
    map<int, int> mp;
    rep(i, n){
        int x;
        cin >> x;
        mp[x]++;
    }
    vector<int> b(m);
    rep(i, m){
        cin >> b[i];
    }
    rep(i, m){
        if(mp[b[i]]){
            mp[b[i]]--;
        }
        else{
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}
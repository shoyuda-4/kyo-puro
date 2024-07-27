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
    vector<string> s(n);
    rep(i, n){
        cin >> s[i];
    }
    rep(i, n-2){
        if(s[i] == "sweet" && s[i+1] == "sweet"){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}
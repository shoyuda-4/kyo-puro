#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    int n;
    string s;
    cin >> n >> s;
    vector<int> vec(n);
    rep2(i,1,n){
        int l = 0;
        rep(j, n-i){
            if(s[j] != s[j+i])
                l++;
            else
                break;
        }
        vec[i] = l;
    }
    rep2(i, 1, n)
        cout << vec[i] << endl;
}
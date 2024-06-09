#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    string s;
    cin >> s;
    int big = 0, sma = 0;
    rep(i, s.size()){
        if(s[i] >= 'a' && s[i] <= 'z'){
            sma++;
        }
        else{
            big++;
        }
    }
    if(big > sma){
        rep(i, s.size())
            s[i] = toupper(s[i]);
    }
    else{
        rep(i, s.size())
            s[i] = tolower(s[i]);
    }
    cout << s << endl;
}
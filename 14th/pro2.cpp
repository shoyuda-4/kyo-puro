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
    int count = 0;
    rep(i, s.size()){
        if(i == s.size()-1){
            count++;
            continue;
        }
        if(s[i] == '0' && s[i+1] == '0'){
            i++;
            count++;
        }
        else{
            count++;
        }
    }
    cout << count << endl;
}
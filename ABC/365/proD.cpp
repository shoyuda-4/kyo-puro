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
    map<string, int> mp;
    mp["R"] = 0;
    mp["P"] = 0;
    mp["S"] = 0;
    if(s[0] == 'r'){
        mp["P"] = 0;
    }
    else if(s[0] == 'p'){
        mp["S"] = 1;
    }
    else{
        mp["R"] = 1;
    }
    rep2(i, 1, n){
        if(s[i] == 'R'){
            mp["R"] = max(mp["P"], mp["S"]);
            mp["P"] = max(mp["R"], mp["S"])+1;
            mp["S"] = 0;
        }
        else if()
    }
}
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

string stst(int n){
    if(n == 1){
        return "1";
    }
    return stst(n-1)+ " " +to_string(n)+ " " +stst(n-1);
}

int main() {
    int n;
    cin >> n;
    string ans = stst(n);
    cout << ans << endl;
    
}
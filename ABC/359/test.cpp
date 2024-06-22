#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    cout << -3%2 << endl;
}


if(llans(sx,tx) > llans(sy,ty)){
        ll a = llans(sx,tx)-llans(sy,ty);
        if(tx > sx){
            if(sleft)
                a--;
            if(tright)
                a--;
        }
        if(sx > tx){
            if(sright)
                a--;
            if(tleft)
                a--;
        }
        if(a>0)
            ans += a;
    }
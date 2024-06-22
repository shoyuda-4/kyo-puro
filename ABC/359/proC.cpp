#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

ll llans(ll a, ll b){
    if (a >= b)
        return a-b;
    else
        return b-a;
}

int main() {
    ll sx, sy, tx, ty;
    cin >> sx >> sy >> tx >> ty;
    ll ans = llans(sy, ty);
    int sleft = 0, sright = 0, tleft = 0, tright = 0;
    if((sx%2 && sy%2) || (!(sx%2) && !(sy%2)))
        sleft = 1;
    else
        sright = 1;
    if((tx%2 && ty%2) || (!(tx%2) && !(ty%2)))
        tleft = 1;
    else
        tright = 1;
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
            ans += (a/2) + 1;
    }
    cout << ans << endl;
}
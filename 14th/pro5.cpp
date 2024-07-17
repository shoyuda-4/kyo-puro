#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

ll blue(int rev, int x, int y);

ll red(int rev, int x, int y){
    if(rev == 1){
        return 0;
    }
    return red(rev-1, x, y) + blue(rev, x, y)*x;
}

ll blue(int rev, int x, int y){
    if(rev == 1){
        return 1;
    }
    return red(rev-1, x, y) + blue(rev-1, x, y)*y;
}

int main() {
    int n, x, y;
    cin >> n >> x >> y;
    cout << red(n, x, y) << endl;
}
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
    vector<tuple<string, int, int>> p(n);
    rep(i, n){
        string a;
        int b;
        cin >> a >> b;
        p[i] = make_tuple(a, b, i+1);
    }
    sort(p.begin(), p.end(), [](tuple<string, int, int> a, tuple<string, int, int> b) {
        if(get<0>(a) == get<0>(b)){ 
            return get<1>(a) > get<1>(b);
        }
        else {
            return get<0>(a) < get<0>(b);
        }
    });
    rep(i, n){
        cout << get<2>(p[i]) << endl; 
    }
}
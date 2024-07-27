#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    rep(i, n){
        cin >> a[i];
    }
    vector<int> b(q);
    vector<int> k(q);
    rep(i, q){
        cin >> b[i] >> k[i];
    }
    vector<int> vec(q);
    
    int x = b[0];
    sort(a.begin(), a.end(), [x](int a, int b){
        return abs(a-x) < abs(b-x);
    });
    cout << abs(a[k[0]-1]-b[0]) << endl;
    rep2(i, 1, q){
        int y = b[i] - b[i-1];
        rep(j, n){
            
        }
    }

}
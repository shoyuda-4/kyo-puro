#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    vector<int> vec;
    while(1){
        int n, m;
        cin >> n >> m;
        if(n == 0 && m == 0)
            break;
        vector<int> a(n);
        int x = 0;
        rep(i, n)
            cin >> a[i];
        rep(i, n-1){
            rep2(j, i+1, n){
                if(a[i]+a[j] > m)
                    continue;
                else{
                    x = max(x, a[i]+a[j]);
                }
            }
        }
        vec.push_back(x);
    }
    rep(i, vec.size()){
        if(vec[i] == 0)
            cout << "NONE" << endl;
        else   
            cout << vec[i] << endl;
    }
}
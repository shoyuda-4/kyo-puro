#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    int n, x, y, z;
    cin >> n >> x >> y >>z;
    vector<tuple<int, int, int>> t(n);
    vector<int> a;
    vector<int> b(n);
    vector<int> c(n);
    rep(i, n)
        cin >> b[i];
    rep(i, n)
        cin >> c[i];
    
    rep(i, n){
        t[i] = make_tuple(b[i], c[i], i+1);
    }
    sort(t.begin(), t.end(), [](tuple<int, int, int> a, tuple<int, int, int> b) {
        if(get<0>(a) == get<0>(b)){
            return get<2>(a) < get<2>(b);
        }
        else{
            return get<0>(a) > get<0>(b);
        }
    });
    rep(i, x){
        a.push_back(get<2>(t[0]));
        t.erase(t.begin());
    }
    sort(t.begin(), t.end(), [](tuple<int, int, int> a, tuple<int, int, int> b) {
        if(get<1>(a) == get<1>(b)){
            return get<2>(a) < get<2>(b);
        }
        else{
            return get<1>(a) > get<1>(b);
        }
    });
    rep(i, y){
        a.push_back(get<2>(t[0]));
        t.erase(t.begin());
    }  
    sort(t.begin(), t.end(), [](tuple<int, int, int> a, tuple<int, int, int> b) {
        auto [n1, m1, l1] = a;
        auto [n2, m2, l2] = b; 
        if(n1 + m1 == n2 + m2){
            return l1 < l2;
        }
        else{
            return n1 + m1 > n2 + m2;
        }
    });  
    rep(i, z){
        a.push_back(get<2>(t[0]));
        t.erase(t.begin());
    }  
    sort(a.begin(), a.end());
    rep(i, a.size()){
        cout << a[i] << endl;
    }
}
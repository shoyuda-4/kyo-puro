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
    vector<int> a(n);
    vector<int> b;
    rep(i, n)
        cin >> a[i];
    rep(i, n){
        b.push_back(a[i]);
        if(b.size() == 1)
            continue;
        while(b[b.size()-1] == b[b.size()-2]){
            int x = b[b.size()-1] + 1;
            b.pop_back();
            b.pop_back();
            b.push_back(x);
            if(b.size() == 1 || b.size() == 0)
                break;
        }   
    }
    cout << b.size() << endl;
}   
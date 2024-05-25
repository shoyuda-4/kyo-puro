#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  vector<int> b(m);
  vector<int> c;
  rep(i, n){
    cin >> a[i];
    c.push_back(a[i]);
  }
  rep(i, m){
    cin >> b[i];
    c.push_back(b[i]);
  }
  sort(c.begin(), c.end());
  rep(i, n+m-1){
    rep(j, n){
        if(c[i] == a[j]){
            rep(k, n){
                if(c[i+1] == a[k]){
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }   
  }
  cout << "No" << endl;
}
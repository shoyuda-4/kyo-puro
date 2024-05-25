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
  vector<int> l(n);
  vector<int> r(n);
  int count = 0;
  rep(i, n){
    cin >> l[i];
    cin >> r[i];
  }
  rep(i, n){
    rep(j, n){
        if(i == j)
            break;
        if(l[i] <= l[j] && l[j] <= r[i])
            count++;
        else if(l[i] <= r[j] && r[j] <= r[i])
            count++;
    }
  }
  cout << count << endl;
}
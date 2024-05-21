#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
  string a;
  string b;
  cin >> a;
  b = a;
  sort(a.begin(), a.end());
  reverse(a.begin(), a.end());
  rep(i, a.size() - 1){
    if (a[i] != b[i] || a[i] == a[i+1] ){
        cout << "No" << endl;
        return 0;
    }
  }
  cout << "Yes" << endl;
}
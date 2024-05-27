#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
  int n, k;
  cin >> n >> k;
  vector<string> s(n);
  rep(i, n)
    cin >> s[i];
  rep(i, n-k)
    s.pop_back();
  sort(s.begin(), s.end());
  rep(i, k)
    cout << s[i] << endl;
}
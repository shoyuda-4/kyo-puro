#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    vector<int> a(5);
    rep(i,5)
        cin >> a[i];
    sort(a.begin(), a.end());
    if(a[0] == a[1] && a[1] == a[2] && a[3] == a[4])
        cout << "Yes" << endl;
    else if (a[0] == a[1] && a[2] == a[3] && a[3] == a[4])
        cout << "Yes" << endl;
    else   
        cout << "No" << endl;
}
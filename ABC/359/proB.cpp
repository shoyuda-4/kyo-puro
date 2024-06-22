#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    int n, count = 0;
    cin >> n;
    vector<int> a(2*n);
    rep(i, 2*n)
        cin >> a[i];
    rep(i, 2*n-2){
        if(a[i] == a[i+2])
            count++;
    }
    cout << count << endl;

}
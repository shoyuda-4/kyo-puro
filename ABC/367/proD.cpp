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
    ll all = 0;
    rep(i,n){
        cin >> a[i];
        all += a[i];
    }
    ll cnt = 0;
    ll sum;
    for(int i = 0; i < n; i++){
        sum = 0;
        for(int j = (i+1)%n; j != 0; j = (j+1)%n){
            sum += a[j];
            if(sum % m == 0){
                //cout << i+1 << " " << j+1 << endl;
                cnt++;
            }
            if((all-sum) % m == 0){
                cnt++;
            }
        }
    }
    cout << cnt << endl;
}
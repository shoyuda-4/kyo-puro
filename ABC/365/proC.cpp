#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

ll llmin(ll a, ll b){
    if(a < b){
        return a;
    }
    else{
        return b;
    }
}

int main() {
    int n;
    cin >> n;
    ll m, sum = 0;
    cin >> m;
    vector<int> a(n);
    rep(i, n){
        cin >> a[i];
        sum += a[i];
    }
    if(sum <= m){
        cout << "infinite" << endl;
        return 0;
    }
    ll left = 1, right = 200000000000000, mid;
    while(1){
        mid = (left + right) / 2;
        ll sum2 = 0, sum3 = 0;
        rep(i, n){
            sum2 += llmin(a[i], mid);
            sum3 += llmin(a[i], mid+1);
        }
        if(sum2 <= m && sum3 > m){
            break;
        }
        else if(sum2 <= m){
            left = mid;
        }
        else{
            right = mid;
        }
    }
    cout << mid << endl;
}
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
    vector<ll> a(n);
    pair<ll, int> ans1(0, 0);
    pair<ll, int> ans2(0, 0);
    rep(i, n){
        cin >> a[i];
    }
    rep(i, n){
        ll n1, n2;
        ll sum1, sum2;
        int ch1 = ans1.second, ch2 = ans2.second;
        if(ans1.second == 1){
            sum1 = ans1.first + a[i]*2;
        }
        else{
            sum1 = ans1.first + a[i];
        }
        if(ans2.second == 1){
            sum2 = ans2.first + a[i]*2;
        }
        else{
            sum2 = ans2.first + a[i];
        }
        if(sum1 > sum2){
            n1 = sum1;
            ch1 = (ch1+1)%2;
        }
        else{
            n1 = sum2;
            ch1 = (ch2+1)%2;
        }
        if(ans1.first > ans2.first){
            n2 = ans1.first;
            ch2 = ans1.second;
        }
        else{
            n2 = ans2.first;
            ch2 = ans2.second;
        }
        ans1.first = n1;
        ans1.second = ch1;
        ans2.first = n2;
        ans2.second = ch2; 
        cout << ans1.first << " " << ans2.first << endl;
    }
    if(ans1.first > ans2.first){
        cout << ans1.first << endl;
    }
    else{
        cout << ans2.first << endl;
    }
}
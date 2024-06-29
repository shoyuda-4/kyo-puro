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
    string s;
    cin >> s;
    ll count;
    vector<ll> vec;
    ll ans = 1;
    rep(i, n-1){
        count = 0;
        if(s[i] != s[i+1]){
            while(s[i] != s[i+1]){
                count++;
                i++;
                if(i == n-1)
                    break;
            }
            count++;
            if(count%2 == 1){
                count /= 2;
                count++;
                vec.push_back(count);
            }else{
                vec.push_back(count/2);
            }
        }
    }
    rep(i, vec.size()){
        ans *= vec[i];
        while(ans >= 1000000007){
            ans -= 1000000007;
        }
    }
    cout << ans << endl;
}
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

map<ll, ll> mp;
ll divide(int n){
    ll rtn = 0;
    if(n == 1){
        return 0;
    }
    if(n%2){
        if(mp.count(n/2)){
            return mp[]
        }
        else{
            rtn = n + divide(n/2) + divide(n/2);
            mp[n] = rtn;
        }
        return rtn;
    }
    else{
        if(mp.count(n/2)){
            rtn = n + mp[n/2];
        }
        else{
            rtn = n + divide(n/2);
        }
        if(mp.count(n/2+1)){
            rtn += mp[n/2+1];
        }
        else{
            rtn += divide(n/2+1);
        }
        mp[n] = rtn;
        return rtn;
    }
}

int main() {
    ll n;
    cin >> n;
    cout << divide(n) << endl;
}
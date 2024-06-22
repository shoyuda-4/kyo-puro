#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    vector<ll> vec;
    vector<ll> v;
    while(1){
        ll b, ck = 0, low;
        cin >> b;
        int c = b % 2;
        if(b == 0)
            break;
        for(ll i = 1; i <= b; i++){
            ll count = 0, price = 0;
            for(ll j = i; j <= b; j++){
                price += j;
                count++;
                if(price == b){ 
                    if(ck < count){
                        ck = count;
                        low = i;
                    }
                    break;
                }
                else if(price > b)
                    break;
            }
            if(ck > 0)
                    break;
        }
        vec.push_back(low);
        v.push_back(ck);
    }    
    rep(i, vec.size()){
        cout << vec[i] << ' ' << v[i] << endl;
    }
}
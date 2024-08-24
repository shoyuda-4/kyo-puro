#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    int n, next = 0;
    cin >> n;
    vector<int> h(n);
    rep(i, n){
        cin >> h[i];
    }
    ll t = 0;
    rep(i, n){
        int hp = h[i];
        if(next == 1){
            if(hp >= 4){
                hp -= 4;
                t += 2;
            }
            else if(hp == 1){
                t++;
                next = 2;
                continue;
            }
            else{
                t += 2;
                next = 0;
                continue;
            }

        }
        else if(next == 2){
            if(hp >= 3){
                hp -= 3;
                t++;
            }
            else{
                t++;
                next = 0;
                continue;
            }
        }
        ll div = hp / 5; 
        int exc = hp % 5;
        t += div*3;
        if(exc >= 3){
            t += 3;
            next = 0;
        }
        else{
            t += exc;
            next = exc;
        }
    }
    cout << t << endl;
}
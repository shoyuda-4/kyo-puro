#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    set<int> s;
    map<int, int> mp;
    int q;
    cin >> q;
    rep(i, q){
        int k,x;
        cin >> k;
        if(k == 1 || k == 2){
            cin >> x;
        }
        if(k == 1){   
            if(mp[x] == 0){
                s.insert(x);
                mp[x]++;
            } 
            else{
                mp[x]++;
            }
        }
        else if(k == 2){
            if(mp[x] == 1){
                s.erase(x);
                mp[x]--;
            }
            else{
                mp[x]--;
            }
        }
        else if(k == 3){
            cout << s.size() << endl;
        }
    }
}
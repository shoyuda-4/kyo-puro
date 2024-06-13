#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    vector<int> vec;
    while(1){
        int  h, w, sum = 0;
        cin >> h >> w;
        if(h == 0 && w == 0)
            break;
        vector<string> a(h);
        rep(i, h)
            cin >> a[i];
        string s;
        cin >> s;
        int x = 0, y = 0;
        rep(i, s.size()){
            rep(j, h){
                rep(k, w)
                    if(s[i] == a[j][k]){
                        sum += abs(j-y);
                        sum += abs(k-x);
                        sum++;
                        x = k;
                        y = j;
                        continue;
                    }
            }

        }
        vec.push_back(sum);
    }
    rep(i, vec.size())
        cout << vec[i] << endl;
}
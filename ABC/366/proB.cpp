#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    int n, mx = 0;
    cin >> n;
    vector<string> s(n);
    rep(i, n){
        cin >> s[i];
        int x = s[i].size();
        mx = max(mx, x);
    }
    vector<string> t(mx);
    rep(i, mx){
        for(int j = n-1; j >= 0; j--){
            if(s[j].size() < i+1){
                int k = j;
                while(k != -1 && s[k].size() < i+1){
                    k--;
                }
                if(k == -1){
                    cout << endl;
                    break;
                }
                else{
                    while(j != k){
                        cout << "*";
                        j--;
                    }
                    j++;
                }
            }
            else{
                cout << s[j][i];
            }
        }
        cout << endl;
    }
}
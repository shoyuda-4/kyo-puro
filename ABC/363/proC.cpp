#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }


int main() {
    int n, k,ans = 0;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> vec(n);
    rep(i,n){
        vec[i] = s[i] - 'a';
    }
    sort(vec.begin(), vec.end());
    do{
        int ck = 0;
        rep(i, n-k+1){
            rep(j, k/2){
                if(vec[i+j] != vec[i+k-1-j]) break;
                if(j == k/2-1) ck = 1;
            }
            if(ck == 1) break;
        }
        if(ck == 0) ans++;
    }while (next_permutation(vec.begin(), vec.end()));
    cout << ans << endl;
}
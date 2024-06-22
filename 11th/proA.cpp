#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    vector<int> vec;
    while(1){
        int n, sum = 0, count = 0;
        cin >> n;
        if(n == 0)
            break;
        vector<int> a(n);
        rep(i, n){
            cin >> a[i];
            sum += a[i];
        }
        int var = sum/n; 
        rep(i, n){
            if(a[i] <= var){
                count++;
            }
        }
        vec.push_back(count);
    }
    rep(i, vec.size())
        cout << vec[i] << endl;
}
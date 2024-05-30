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
    vector<pair<int, int>> p(n);
    rep(i, n){
        int count = 0;
        cin >> s;
        rep(j, s.size()){
            if(s[j] == 'o')
                count++;
        }
        p[i] = make_pair(count, i+1);
    }

    sort(p.begin(), p.end(), [](pair<int, int> a, pair<int, int> b) {
        if(a.first == b.first){
            return a.second < b.second;
        }
        else{
            return a.first > b.first;
        }
    });

    rep(i, n){
        cout << p[i].second  << " ";
    }
    cout << endl;
}
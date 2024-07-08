#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    int rice = -1;
    int miso = -1;
    char S[3];
    cin >> S;
    for (int i = 0; i < 3; i++)
    {
        if(S[i] == 'R'){
            rice = i;
        }
        else if(S[i] == 'M'){
            miso = i;
        }
    }

    if(miso > rice){
        cout << "Yes" << endl;
    }
    else if(miso < rice){
        cout << "No" << endl;
    }
    
    return 0;
}
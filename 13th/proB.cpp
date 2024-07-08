#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    vector<string> vec;
    while(1){
        string s1, s2;
        cin >> s1;
        if(s1 == ".")
            break;
        cin >> s2;
        int i = 0, j = 0, count = 0;
        while(s1[i] != '\0' || s2[j] != '\0'){
            if(s1[i] != s2[j]){
                count = -1;
                vec.push_back("DIFFERENT");
                break;
            }
            if(s1[i] == '"' && s2[j] == '"'){
                i++;
                j++;
                while(1){
                    if(s1[i] == '"' && s2[j] == '"')
                        break;
                    if(s1[i] != s2[j]){
                        count++;
                        while(s1[i] != '"')
                            i++;
                        while(s2[j] != '"')
                            j++;
                        break;
                    }
                    i++;
                    j++;
                }
            }
            i++;
            j++;
        }
        if(count == 0){
            vec.push_back("IDENTICAL");
        }
        else if(count == 1){
            vec.push_back("CLOSE");
        }
        else if(count >= 2){
            vec.push_back("DIFFERENT");
        }
    }
    rep(i, vec.size()){
        cout << vec[i] << endl;
    }
}
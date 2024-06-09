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
    vector<string> revel1(3);
    revel1[0] = "###";
    revel1[1] = "#.#";
    revel1[2] = "###";
    vector<string> revel2(9);
    vector<string> revel3(27);
    vector<string> revel4(81);
    vector<string> revel5(243);
    vector<string> revel6(729);

    rep(i, 9){
        rep(j, 3){
            revel2[i] += revel1[i%3];
        }
    }
    for(int i = 3; i <= 5; i++){
        for(int j = 3; j <= 5; j++){
            revel2[i][j] = '.';
        }
    }

    rep(i, 27){
        rep(j, 3){
            revel3[i] += revel2[i%9];
        }
    }
    for(int i = 9; i <= 17; i++){
        for(int j = 9; j <= 17; j++){
            revel3[i][j] = '.';
        }
    }

    rep(i, 81){
        rep(j, 3){
            revel4[i] += revel3[i%27];
        }
    }
    for(int i = 27; i <= 53; i++){
        for(int j = 27; j <= 53; j++){
            revel4[i][j] = '.';
        }
    }  

    rep(i, 243){
        rep(j, 3){
            revel5[i] += revel4[i%81];
        }
    }
    for(int i = 81; i <= 161; i++){
        for(int j = 81; j <= 161; j++){
            revel5[i][j] = '.';
        }
    }    

    rep(i, 729){
        rep(j, 3){
            revel6[i] += revel5[i%243];
        }
    }
    for(int i = 243; i <= 485; i++){
        for(int j = 243; j <= 485; j++){
            revel6[i][j] = '.';
        }
    }

    if(n == 0)
        cout << "#" << endl; 
    else if(n == 1){
        rep(i, revel1.size())
            cout << revel1[i] << endl;
    }
    else if(n == 2){
        rep(i, revel2.size())
            cout << revel2[i] << endl;
    }
    else if(n == 3){
        rep(i, revel3.size())
            cout << revel3[i] << endl;
    }
    else if(n == 4){
        rep(i, revel4.size())
            cout << revel4[i] << endl;
    }
    else if(n == 5){
        rep(i, revel5.size())
            cout << revel5[i] << endl;
    }
    else if(n == 6){
        rep(i, revel6.size())
            cout << revel6[i] << endl;
    }

}
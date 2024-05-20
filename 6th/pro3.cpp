#include <bits/stdc++.h>
using namespace std;

int main(){
    long long S, P;
    cin >> S >> P;
    for (int i = 1; i < 10000000; i++){
        if (i * (S-i) == P){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}
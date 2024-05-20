#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    string S;
    cin >> N;
    cin >> S;
    int tak = 0, aok = 0;
    for (int i = 0; i < N; i++){
        if (S.at(i) == 'T'){
            tak++;
        }
        else{
            aok++;
        }
        if (N % 2 == 0) {
            if (tak == N/2){
                cout << 'T' << endl;
                return 0;
            }
            else if (aok == N/2){
                cout << 'A' << endl;
                return 0;
            }
        }
    }
    if (tak > aok)
        cout << 'T' << endl;
    else
        cout << 'A' << endl;
}
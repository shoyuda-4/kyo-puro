#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, A, B;
    cin >> N >> A >> B;
    string S;
    cin >> S;
    int pass = 0;
    int rank = 1;
    for (int i = 0; i < N; i++){
        if (S[i] == 'a'){
            if (pass < A + B){
                cout << "Yes" << endl;
                pass++;
            }
            else
                cout << "No" << endl; 
        }
        else if (S[i] == 'b'){
            if (pass < A + B && rank <= B){
                cout << "Yes" << endl;
                pass++;
                rank++;
            }
            else
                cout << "No" << endl;
        }
        else
            cout << "No" << endl;
    }
}
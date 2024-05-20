#include <bits/stdc++.h>
using namespace std;

int main(){
    string S, T;
    cin >> S >> T;
    int j = 0;
    for (int i = 0; i < T.size(); i++){
        if (T.at(i) == S.at(j)){
            cout << i + 1 << " ";
            j++;
        }
    }
    cout << endl;
}
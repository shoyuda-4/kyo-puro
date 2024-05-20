#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec(8);
    for (int i = 0; i < 8; i++)
        cin >> vec.at(i);
    for (int i = 0; i < 7; i++){
        if (vec.at(i) > vec.at(i+1)){
            cout << "No" << endl;
            return 0;
        }
        if (vec.at(i) < 100 || vec.at(i) > 675){
            cout << "No" << endl;
            return 0;
        }
        if (vec.at(i) % 25 != 0){
            cout << "No" << endl;
            return 0;
        }
    }
    if (vec.at(i) > vec.at(i+1)){
            cout << "No" << endl;
            return 0;
    }
    if (vec.at(i) < 100 || vec.at(i) > 675){
        cout << "No" << endl;
        return 0;
    }
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, A, B;
    cin >> N;
    vector<int> vec(N);
    cin >> A >> B;
    for (int i = 0; i < N; i++)
        cin >> vec.at(i);
    for (int i = 0; i < N; i++){
        if (vec.at(i) == A + B){
            cout << i + 1 << endl;
            break;
        }
    }
}
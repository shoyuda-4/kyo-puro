#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    vector<int> C(N);
    vector<int> D(1, 0);
    for (int i = 0; i < N; i++){
        cin >> A[i] >> C[i];
    }
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            if (A[i] < A[j] && C[i] > C[j]){
                D.push_back(i+1);
                break;
            }
        }
    }
    cout << N - D.size() + 1<< endl;
    if (D.size() == 1){
        for (int i = 1; i < N+1; i++)
            cout << i << " ";
        cout << endl;
        return 0;
    }
    D.erase(D.begin());
    int i = 0;
    for (int k = 1; k < N+1; k++){
        if (k != D[i]){
            cout << k << " ";
        }
        else
            i++;
    }
    cout << endl;
}
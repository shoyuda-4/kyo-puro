#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    vector<int> B(M);
    vector<int> C;
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }
    for (int i = 0; i < M; i++){
        cin >> B[i];
    }

    for (int i = 0; i < N; i++){
        int dup = 0;
        for (int j = 0; j < M; j++){
            if (A[i] == B[j]){
                dup++;
                break;
            }
        }
        if (dup == 0)
            C.push_back(A[i]);
    }

    for (int i = 0; i < M; i++){
        int dup = 0;
        for (int j = 0; j < N; j++){
            if (B[i] == A[j]){
                dup++;
                break;
            }
        }
        if (dup == 0)
            C.push_back(B[i]);
    }
    sort(C.begin(), C.end());
    for (int i = 0; i < C.size(); i++)
        cout << C[i] << " ";
    cout << endl;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    vector<int> B(N);
    map<int, int> C;
    int count = N;
    for (int i = 0; i < N; i++){
        cin >> A[i] >> B[i];
        C[A[i]] = B[i];
    }
    sort(A.begin(), A.end());
    count += C[A[N-1]];
    count += A[0] - 1;
    for (int i = 0; i < N-1; i++){
        int dif1 = A[i+1] - A[i] - 1;
        int dif2 = C[A[i]] - C[A[i+1]] - 1;
        count += dif1 > dif2 ? dif2 : dif1;
    }
    cout << count << endl;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, K;
    cin >> N >> K;
    vector<int> vec(N);
    for (int i = 0; i < N; i++)
        cin >> vec[i];
    int count = 0, M = K;
    for (int i = 0; i < N; i++){
        if (vec[i] > K){
            count++;
            K = M;
            i--;
        }
        else{
            K -= vec[i];
        }
        if (i == N-1)
            count++;
    }
    cout << count << endl;
}
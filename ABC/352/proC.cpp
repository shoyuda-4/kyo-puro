#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    vector<int> B(N);
    int def = 0, M; 
    long long ans = 0;
    for (int i = 0; i < N; i++){
        cin >> A.at(i) >> B.at(i);
        if (def < B.at(i) - A.at(i)){
                def = B.at(i) - A.at(i);
                M = i;
            }
    }
    for (int i = 0; i < N; i++){
        if (i == M)
            ans += B.at(i);
        else
            ans += A.at(i);
    }
    cout << ans << endl;
}
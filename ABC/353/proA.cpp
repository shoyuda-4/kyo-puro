#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> vec(N);
    for (int i = 0; i < N; i++)
        cin >> vec[i];
    for (int i = 1; i < N; i++){
        if (vec[0] < vec[i]){
            cout << i + 1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}
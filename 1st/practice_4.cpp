#include <bits/stdc++.h>
using namespace std;

//配列の
int main(){
    int N, num = 0;
    cin >> N;
    vector<int> vec(N);
    for (int i = 0; i < N; i++)
        cin >> vec.at(i);
    while (1){
        for (int i = 0; i < N; i++){
            if (vec.at(i) % 2 == 0)
                vec.at(i) /= 2;
            else{
                cout << num << endl;
                return 0;
            }
        }
        num++;
    }
}
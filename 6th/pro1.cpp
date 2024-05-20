#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, count = 0;
    cin >> N;
    for (int i = 0; i < 4; i++){
        if (N % 10 == 2)
            count++;
        N /= 10;
    }
    cout << count << endl;
}
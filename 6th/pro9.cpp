#include <bits/stdc++.h>
using namespace std;

int main(){
    long long  K, A, B;
    cin >> K >> A >> B;
    long long bisk = 1;
    if (B - A < 2){
        bisk += K; 
    }
    else {
        while(bisk < A && K > 0){
            bisk++;
            K--;
        }
        for (int i = 0; i < K / 2; i++){
            bisk += B - A;
        }
        if (K % 2)
            bisk++;
    }
    cout << bisk << endl;
}
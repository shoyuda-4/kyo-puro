#include <bits/stdc++.h>
using namespace std;

int mult(int n){
    int x = 1;
    for (int i = 0; i < n; i++){
        x *= 2;
    }
    return x;
}

int main(){
    int H;
    cin >> H;
    int Y = 0;
    for (int i = 0; i < 1000000000; i++){
        Y += mult(i);
        if (Y > H) {
            cout << i+1 << endl;
            return 0;
        }
    }
}
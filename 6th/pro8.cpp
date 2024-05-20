#include <bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin >> S;
    int sum = 0;
    for (int i = 0; i < S.size(); i++) 
        sum += (S[i] - '0');
    cout << sum << endl;
}
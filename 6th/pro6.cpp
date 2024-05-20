#include <bits/stdc++.h>
using namespace std;

map<int, int> mp;
int check(int n){
    if (n == 0)
        return 1;

    if (mp.count(n))
        return mp[n];

    if (n < 100)
        return mp[n] = 0;

    for (int i = 0; i < 6; i++){
        if (check(n - 100 - i))
            return mp[n] = 1;
    }
    return mp[n] = 0;
}

int main(){
    int X;
    cin >> X;
    cout <<  check(X) << endl;
}
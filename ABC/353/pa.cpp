#include <bits/stdc++.h>
using namespace std;
int devide(int n, int m){
    return (n+m)%(10*10*10*10*10*10*10*10);
}

int main(){
    cout << devide(50000001, 3) << endl;
}
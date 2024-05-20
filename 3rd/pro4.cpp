#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec;
    vec = {0,3,4,8,9,14,23};
    char p, q;
    int n1, n2, ans;
    cin >> p >> q;
    switch (p){
        case 'A':
        n1 = vec.at(0);
        break;
        case 'B':
        n1 = vec.at(1);
        break;
        case 'C':
        n1 = vec.at(2);
        break;
        case 'D':
        n1 = vec.at(3);
        break;
        case 'E':
        n1 = vec.at(4);
        break;
        case 'F':
        n1 = vec.at(5);
        break;
        case 'G':
        n1 = vec.at(6);
        break;
    }
    switch (q){
        case 'A':
        n2 = vec.at(0);
        break;
        case 'B':
        n2 = vec.at(1);
        break;
        case 'C':
        n2 = vec.at(2);
        break;
        case 'D':
        n2 = vec.at(3);
        break;
        case 'E':
        n2 = vec.at(4);
        break;
        case 'F':
        n2 = vec.at(5);
        break;
        case 'G':
        n2 = vec.at(6);
        break;
    }    
    if (n1 > n2)
        ans = n1 - n2;
    else    
        ans = n2 - n1;
    cout << ans << endl;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int page, pap;
    cin >> page;
    if (page % 2 == 0)
        pap = page/2;
    else 
        pap = page/2 + 1;
    cout << pap << endl;
}
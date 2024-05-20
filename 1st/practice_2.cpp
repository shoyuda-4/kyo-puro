#include <bits/stdc++.h>
using namespace std;

//2つの整数の積の偶奇の判定
int main() {
    int a, b;
    cin >> a >> b;
    if (a * b % 2 == 1)
        cout << "Odd" << endl;
    else
        cout << "Even" << endl;
}
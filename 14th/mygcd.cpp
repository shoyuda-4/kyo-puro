#include <bits/stdc++.h>
using namespace std;

int mygcd(int a, int b) {
    // ベースケース
    if (b == 0)
        return a;

    // 再帰ステップ
    else
        return mygcd(b, a%b);
}

int main() {
    int a, b; 
    cin >> a >> b;

    cout << "a : "<< a << endl << "b : " << b << endl;
    cout << "gcd : " << mygcd(a, b) << endl;

    return 0;
}

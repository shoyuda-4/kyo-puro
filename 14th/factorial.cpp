#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
    // ベースケース
    if (n == 0)
        return 1;

    // 再帰ステップ
    else
        return n*factorial(n-1);
}

int main() {
    int n;
    cin >> n;

    cout << "n : " << n << " , ";
    cout << "n! : " << factorial(n) << endl;

    return 0;
}

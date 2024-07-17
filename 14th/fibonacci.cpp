#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n) {
    // ベースケース
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    
    // 再帰ステップ
    else
        return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int n;
    cin >> n;

    cout << "n : " << n << " , ";
    cout << "fibonacci : " << fibonacci(n) << endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a(10);
    for (int i = 0; i < 10; i++) {
        // (1)
        cin >> *(a.begin()+i);
    }

    int num = 0;                // numは、画面に表示される数字
    auto itr = a.begin();       // itrは、ボタンを押して変わった後の要素のイテレータ
    for (int i = 0; i < 3; i++) {
        // (2)
        itr = a.begin() + num;
        num = *itr;
        // (3)
    }

    // (4)
    cout << num << endl;

    return 0;
}

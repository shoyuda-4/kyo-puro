#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a(4);
    for (int i = 0; i < 4; i++) cin >> a[i];

    // これより下に記述
    auto itr = min_element(a.begin(), a.end());
    cout << *itr << endl;

    return 0;
}

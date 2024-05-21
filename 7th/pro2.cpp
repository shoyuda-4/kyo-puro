#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a(3);
    for (int i = 0; i < 3; i++) cin >> a[i];

    // これより下に記述
    auto itr = a.begin();
    sort(a.begin(), a.end());
    if (*(itr+2)-*(itr+1) == *(itr+1)-*(itr))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int mon = 700;
    string s;
    cin >> s;
    for (int i = 0; i < 3; i++){
        if (s.at(i) == 'o')
            mon += 100;
    }
    cout << mon << endl;
}
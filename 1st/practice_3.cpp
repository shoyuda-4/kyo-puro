#include <bits/stdc++.h>
using namespace std;

//文字列sのうち、1 の個数を出力
int main() {
    string s;
    int sum = 0;
    cin >> s;
    for (int i = 0; i < 3; i++){
        if (s.at(i) == '1')
            sum++;
    }
    cout << sum << endl;
}
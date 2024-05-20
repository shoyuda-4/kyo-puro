#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, answer = 1;
    cin >> N;
    while (answer * 2 <= N)
        answer *= 2;
    cout << answer << endl;
}
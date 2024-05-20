#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, min, max, dif;
    cin >> N;
    vector<int> numbers(N);
    for (int i = 0; i < N; i++)
        cin >> numbers.at(i);
    min = numbers.at(0);
    max = numbers.at(0);
    for (int i = 1; i < N; i++){
        if (numbers.at(i) < min)
            min = numbers.at(i);
        if (numbers.at(i) > max)
            max = numbers.at(i);
    }
    dif = max - min;
    cout << dif << endl;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<string> s(N);
    int sum = 0;
    int n;
    for (int i = 0; i < N; ++i) {
        cin >> s[i];
        cin >> n;
        sum += n;
    }

    string tmp;
     for (int i = 0; i < N-1; i++) {
        for (int j = 0; j < N-1; j++) {
            if (s[j] > s[j+1]) {
                tmp = s[j];
                s[j] = s[j+1];
                s[j+1] = tmp;
            }
        }
    }
    cout << s[sum % N] << endl;
}
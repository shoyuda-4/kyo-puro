#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> vec(N);
    int ans = 0; 
    for (int i = 0; i < N; i++)
        cin >> vec[i];
    sort(vec.begin(), vec.end());
    int right = 1, count = 0;
    for (int left = 0; left < N; left++){
        while (right < N-1 && a[left]+a[right+1] >= 100000000){
            right++;
        }

    }
    cout << ans << endl;
}
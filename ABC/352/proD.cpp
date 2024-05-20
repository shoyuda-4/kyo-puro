#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, K;
    cin >> N >> K;
    vector<int> P(N);
    int low, high, ans = N;
    for (int i = 0; i < N; i++)
        cin >> P.at(i);
    for (int i = 0; i < N; i++){
        int count = 1;
        if (P.at(i) > N-K+1)
            continue;
        else
            for (int j = 0; j < N; j++){
                if (P.at(j) <= P.at(i)+K-1 && P.at(j) >= P.at(i)){
                    if (count == 1)
                        low = j+1;
                    if (count == K){
                        high = j+1;
                        if (ans > high-low)
                            ans = high - low;
                    }    
                    count++;
                }
                if (count > K)
                    break;
            }

    }
    cout << ans << endl;
}
//N-K+1 あり得る数  最初とk回目に見つかった数だけ気にする
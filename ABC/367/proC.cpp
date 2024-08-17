#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> r(n);
    rep(i, n){
        cin >> r[i];
    }
    if(n == 8){
        for(int a = 1; a <= 5; a++){
            if(a > r[0]){
                break;
            }
            for(int b = 1; b <= 5; b++){
                if(b > r[1]){
                    break;
                }
                for(int c = 1; c <= 5; c++){
                    if(c > r[2]){
                        break;
                    }
                    for(int d = 1; d <= 5; d++){
                        if(d > r[3]){
                            break;
                        }
                        for(int e = 1; e <= 5; e++){
                            if(e > r[4]){
                                break;
                            }
                            for(int f = 1; f <= 5; f++){
                                if(f > r[5]){
                                    break;
                                }
                                for(int g = 1; g <= 5; g++){
                                    if(g > r[6]){
                                        break;
                                    }
                                    for(int h = 1; h <= 5; h++){
                                        if(h > r[7]){
                                            break;
                                        }
                                        int sum = a+b+c+d+e+f+g+h;
                                        if(sum % k != 0){
                                            continue;
                                        }
                                        else{
                                            cout << a << " " << b << " " << c << " " << d << " " << e << " " << f << " " << g << " " << h <<endl;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if(n == 7){
        for(int a = 1; a <= 5; a++){
            if(a > r[0]){
                break;
            }
            for(int b = 1; b <= 5; b++){
                if(b > r[1]){
                    break;
                }
                for(int c = 1; c <= 5; c++){
                    if(c > r[2]){
                        break;
                    }
                    for(int d = 1; d <= 5; d++){
                        if(d > r[3]){
                            break;
                        }
                        for(int e = 1; e <= 5; e++){
                            if(e > r[4]){
                                break;
                            }
                            for(int f = 1; f <= 5; f++){
                                if(f > r[5]){
                                    break;
                                }
                                for(int g = 1; g <= 5; g++){
                                    if(g > r[6]){
                                        break;
                                    }
                                    int sum = a+b+c+d+e+f+g;
                                    if(sum % k != 0){
                                        continue;
                                    }
                                    else{
                                        cout << a << " " << b << " " << c << " " << d << " " << e << " " << f << " " << g << endl;
                                    }     
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if(n == 6){
        for(int a = 1; a <= 5; a++){
            if(a > r[0]){
                break;
            }
            for(int b = 1; b <= 5; b++){
                if(b > r[1]){
                    break;
                }
                for(int c = 1; c <= 5; c++){
                    if(c > r[2]){
                        break;
                    }
                    for(int d = 1; d <= 5; d++){
                        if(d > r[3]){
                            break;
                        }
                        for(int e = 1; e <= 5; e++){
                            if(e > r[4]){
                                break;
                            }
                            for(int f = 1; f <= 5; f++){
                                if(f > r[5]){
                                    break;
                                }
                                int sum = a+b+c+d+e+f;
                                if(sum % k != 0){
                                    continue;
                                }
                                else{
                                    cout << a << " " << b << " " << c << " " << d << " " << e << " " << f << endl;
                                }                        
                            }
                        }
                    }
                }
            }
        }
    }
    if(n == 5){
        for(int a = 1; a <= 5; a++){
            if(a > r[0]){
                break;
            }
            for(int b = 1; b <= 5; b++){
                if(b > r[1]){
                    break;
                }
                for(int c = 1; c <= 5; c++){
                    if(c > r[2]){
                        break;
                    }
                    for(int d = 1; d <= 5; d++){
                        if(d > r[3]){
                            break;
                        }
                        for(int e = 1; e <= 5; e++){
                            if(e > r[4]){
                                break;
                            }
                            int sum = a+b+c+d+e;
                            if(sum % k != 0){
                                continue;
                            }
                            else{
                                cout << a << " " << b << " " << c << " " << d << " " << e << endl;
                            }
                        }
                    }
                }
            }
        }
    }
    if(n == 4){
        for(int a = 1; a <= 5; a++){
            if(a > r[0]){
                break;
            }
            for(int b = 1; b <= 5; b++){
                if(b > r[1]){
                    break;
                }
                for(int c = 1; c <= 5; c++){
                    if(c > r[2]){
                        break;
                    }
                    for(int d = 1; d <= 5; d++){
                        if(d > r[3]){
                            break;
                        }
                        int sum = a+b+c+d;
                        if(sum % k != 0){
                            continue;
                        }
                        else{
                            cout << a << " " << b << " " << c << " " << d << endl;
                        }
                    }
                }
            }
        }
    }
    if(n == 3){
        for(int a = 1; a <= 5; a++){
            if(a > r[0]){
                break;
            }
            for(int b = 1; b <= 5; b++){
                if(b > r[1]){
                    break;
                }
                for(int c = 1; c <= 5; c++){
                    if(c > r[2]){
                        break;
                    }
                    int sum = a+b+c;
                    if(sum % k != 0){
                        continue;
                    }
                    else{
                        cout << a << " " << b << " " << c << endl;
                    }
                }
            }
        }
    }
    if(n == 2){
        for(int a = 1; a <= 5; a++){
            if(a > r[0]){
                break;
            }
            for(int b = 1; b <= 5; b++){
                if(b > r[1]){
                    break;
                }
                int sum = a+b;
                if(sum % k != 0){
                    continue;
                }
                else{
                    cout << a << " " << b << endl;
                }
            }
        }
    }
    if(n == 1){
        for(int a = 1; a <= 5; a++){
            if(a > r[0]){
                break;
            }
            int sum = a;
            if(sum % k != 0){
                continue;
            }
            else{
                cout << a << endl;
            }
        }
    }
}
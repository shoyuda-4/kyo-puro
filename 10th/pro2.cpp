#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    double a, b, d;
    cin >> a >> b >> d;
    double rad = d * M_PI / 180;
    double x = cos(rad) * a - sin(rad) * b;
    double y = sin(rad) * a + cos(rad) * b;
    cout << fixed << setprecision(10) << x << " " << y << endl;
}
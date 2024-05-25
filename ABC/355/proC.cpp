#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

struct Number{
    int check;
    int index;
};

int main() {
  int n, t, b;
  cin >> n >> t;
  vector<Number> numbers(n*n+1);
  int tate = n*n+1, yoko = n*n+1, naname1 = n*n+1, naname2 = n*n+1;

  rep(i, n*n+1){
    numbers[i].check = 0;
    numbers[i].index = 0;
  }
  
  rep2(i, 1, t+1){
    cin >> b;
    numbers[b].check = 1;
    numbers[b].index = i;
  }
  rep2(i, 1, n+1){
    int c = 0;
    rep(j, n){
        if(numbers[j*n+i].check  != 1){
            break;
        }
        else
            c =  max(c, numbers[j*n+i].index);
        if(j == n-1){
            tate = min(tate, c);
        }
    }
  }
  for(int i = 1; i <= n*(n-1)+1; i += n){
    int c = 0;
    rep(j, n){
        if(numbers[i+j].check != 1)
            break;
        else
            c =  max(c, numbers[i+j].index);
        if(j == n-1)
            yoko = min(yoko,c);
    }
  }
  int d = 0;
  for(int i = 1; i <= n*n; i += n+1){
    if(numbers[i].check != 1)
        break;
    else
        d = max(d, numbers[i].index);
    if(i == n*n)
        naname1 = d;
  }
  d = 0;
  for(int i = n; i <= n*(n-1)+1; i += n-1){
    if(numbers[i].check != 1)
        break;
    else
        d = max(d, numbers[i].index);
    if(i == n*(n-1)+1)
        naname2 = d;
  }
  if(tate==n*n+1 && yoko==n*n+1 && naname1==n*n+1 && naname2==n*n+1){
    cout << -1 << endl;
    return 0;
  }
  cout << min(min(tate, yoko), min(naname1, naname2)) << endl;
}
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> b(n, 0);
    int all = 0;
    /*rep(i, m){
        all |= (1<<i);
    }*/
    all = (1<<m)-1;
    string s;
    rep(i, n){
        cin >> s;
        rep(j, m){
            if(s[j] == 'o'){
                b[i]|= (1<<j);
            }
        }
    }
    if(n >= 1){
        rep(i, n){
            if(b[i] == all){
                cout << 1 << endl;
                return 0;
            }
        }
    }
    if(n >= 2){
        rep(i, n-1){
            rep2(j, i+1, n){
                if((b[i]|b[j]) == all){
                    cout << 2 << endl;
                    return 0;
                }
            }
        }
    }
    if(n >= 3){
        rep(i, n-2){
            rep2(j, i+1, n-1){
                rep2(k, j+1, n){
                    if((b[i]|b[j]|b[k]) == all){
                    cout << 3 << endl;
                    return 0;
                    }
                }
            }
        }
    }
    if(n >= 4){
        rep(i, n-3){
            rep2(j, i+1, n-2){
                rep2(k, j+1, n-1){
                    rep2(l, k+1, n){
                        if((b[i]|b[j]|b[k]|b[l]) == all){
                            cout << 4 << endl;
                            return 0;
                        }
                    }
                }
            }
        }
    }
    if(n >= 5){
        rep(i, n-4){
            rep2(j, i+1, n-3){
                rep2(k, j+1, n-2){
                    rep2(l, k+1, n-1){
                        rep2(o, l+1, n){
                            if((b[i]|b[j]|b[k]|b[l]|b[o]) == all){
                                cout << 5 << endl;
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }
    if(n >= 6){
        rep(i, n-5){
            rep2(j, i+1, n-4){
                rep2(k, j+1, n-3){
                    rep2(l, k+1, n-2){
                        rep2(o, l+1, n-1){
                            rep2(p, o+1, n){
                                if((b[i]|b[j]|b[k]|b[l]|b[o]|b[p]) == all){
                                    cout << 6 << endl;
                                    return 0;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if(n >= 7){
        rep(i, n-6){
            rep2(j, i+1, n-5){
                rep2(k, j+1, n-4){
                    rep2(l, k+1, n-3){
                        rep2(o, l+1, n-2){
                            rep2(p, o+1, n-1){
                                rep2(q, p+1, n){
                                    if((b[i]|b[j]|b[k]|b[l]|b[o]|b[p]|b[q]) == all){
                                        cout << 7 << endl;
                                        return 0;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if(n >= 8){
        rep(i, n-7){
            rep2(j, i+1, n-6){
                rep2(k, j+1, n-5){
                    rep2(l, k+1, n-4){
                        rep2(o, l+1, n-3){
                            rep2(p, o+1, n-2){
                                rep2(q, p+1, n-1){
                                    rep2(r, q+1, n){
                                        if((b[i]|b[j]|b[k]|b[l]|b[o]|b[p]|b[q]|b[r]) == all){
                                            cout << 8 << endl;
                                            return 0;
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
    if(n >= 9){
        rep(i, n-8){
            rep2(j, i+1, n-7){
                rep2(k, j+1, n-6){
                    rep2(l, k+1, n-5){
                        rep2(o, l+1, n-4){
                            rep2(p, o+1, n-3){
                                rep2(q, p+1, n-2){
                                    rep2(r, q+1, n-1){
                                        rep2(s, r+1, n){
                                            if((b[i]|b[j]|b[k]|b[l]|b[o]|b[p]|b[q]|b[r]|b[s]) == all){
                                                cout << 9 << endl;
                                                    return 0;
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
    }
    cout << 10 << endl;
}
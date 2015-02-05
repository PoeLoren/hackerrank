#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

char a[1001][1001], b[1001][1001];

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T;
    cin >> T;
    while(T--){
        int R, C, r, c;
        cin >> R >> C;
        for(int i = 0; i < R; ++i)
            for(int j = 0; j < C; ++j)
                cin >> a[i][j];
        cin >> r >> c;
        for(int i = 0; i < r; ++i)
            for(int j = 0; j < c; ++j)
                cin >> b[i][j];
        bool res = false;
        for(int i = 0; i < R - r + 1; ++i)
            for(int j = 0; j < C - c + 1; ++j){
                if(a[i][j] == b[0][0]){
                    bool flag = true;
                    for(int p = 0; p < r; ++p){
                        for(int q = 0; q < c; ++q){
                            if(a[i + p][j + q] != b[p][q]){
                                flag = false;
                                break;
                            }
                        }
                        if(flag == false)
                            break;   
                    }
                    if(flag)
                    {
                        res = true;
                        break;
                    }
                }
        }
        if(res)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

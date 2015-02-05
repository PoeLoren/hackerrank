//http://www.cnblogs.com/sunshineatnoon/p/3919423.html
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define INT_MAX 10000000

int dp[52][52][1002];
char a[52][52];
int n, m, K;
int fourMin(int i, int j, int k){
    int minNum = INT_MAX;
    if(i - 1 >= 0){
        if(a[i - 1][j] == 'D')
            minNum = min(dp[i - 1][j][k - 1], minNum);
        else
            minNum = min(dp[i - 1][j][k - 1] + 1, minNum);
    }
    if(j - 1 >= 0){
        if(a[i][j - 1] == 'R')
            minNum = min(dp[i][j - 1][k - 1], minNum);
        else
            minNum = min(dp[i][j - 1][k - 1] + 1, minNum);
    }
    if(i + 1 < n){
        if(a[i + 1][j] == 'U')
            minNum = min(dp[i + 1][j][k - 1], minNum);
        else
            minNum = min(dp[i + 1][j][k - 1] + 1, minNum);
    }
    if(j + 1  < m){
        if(a[i][j + 1] == 'L')
            minNum = min(dp[i][j + 1][k - 1], minNum);
        else
            minNum = min(dp[i][j + 1][k - 1] + 1, minNum);
    }
    return minNum;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
 
    cin >> n >> m >> K;

    int istar = 0, jstar = 0;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> a[i][j];
            if(a[i][j] == '*'){
                istar = i;
                jstar = j;
            }
        }
    }
    for(int k = 0; k <= K; ++k){
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < m; ++j ){
                if(k == 0)
                    dp[i][j][k] = (i == 0 && j == 0) ? 0 : INT_MAX;
                else
                    dp[i][j][k] = fourMin(i, j, k);
            }
        }
    }
    int res = INT_MAX;
    for(int i = 0; i <= K; ++i)
        res = min(res, dp[istar][jstar][i]);
    if(res == INT_MAX)
        cout << -1;
    else
        cout << res;
    return 0;
}

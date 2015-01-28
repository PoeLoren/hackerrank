#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define MOD 1000000007

int solve(int m, int n){
    int a[1001][1001];
    for(int i = 0;i <= n; ++i){
        a[0][i] = 0;
    }
    for(int i = 1; i <= m; ++i){
        a[i][0] = 1;
    }
    for(int i = 1;i <= m; ++i){
        for(int j = 1; j <= n; ++j){
            a[i][j] = (a[i-1][j] + a[i][j-1]) % MOD;
        }
    }
    return a[m][n];
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    while(n--){
        int N, M;
        cin >> N >> M;
        cout << solve(M, N) << endl;
    }
    return 0;
}

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
const long long MOD = 1e9 + 7;
long long  square(long long a, long long b)
{
        if(b <= 0)
            return 1;
        if(b == 1)
            return a;
        if(b % 2 == 1){
            long long tmp = square(a, b / 2);
            return tmp * tmp % MOD * a % MOD;
        }else{
            long long tmp = square(a, b / 2);
            return tmp * tmp % MOD;
        }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    cin >> t;
    while(t--){
        long long m, n;
        cin >> n >> m;
        if(m == 1 && n == 1){
            cout << "1" << endl;
            continue;
        }
        if(m == 1){
            cout << "0" << endl;
            continue;
        }
        if(n == 1){
            cout << m << endl;
            continue;
        }
        long long res = 0;
        res = m * (m - 1) % MOD;
        if(n >= 3)
            res = res * square(m-2, n - 2);
        cout << res % MOD<< endl;
    }
    return 0;
}

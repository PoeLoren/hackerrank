#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T;
    cin >> T;
    while(T--){
        int n, k;
        cin >> n >> k;
        vector<int> a;
        for(int i = 0; i < n; ++i)
        {
            int tmp;
            cin >> tmp;
            a.push_back(tmp);
        }
        long long res = 0;
        int p = 0;
        for(int i = 0; i < n; ++i){
            if(a[i] > k){
                res = res + i + 1;
                p = i + 1;
            }else{
                res += p;
            }
        }
        cout << res << endl;
    }
    return 0;
}

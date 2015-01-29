#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin >> t;
    while(t--){
        vector<int> a;
        vector<int> l, r;
        int n;
        cin >> n;
        
        a.resize(n);
        l.resize(n);
        r.resize(n);
        for(int i = 0; i < n; ++i){
            cin >> a[i];
        }
        if(n == 1){
            cout << "YES" << endl;
            continue;
        }
        l[0] = 0;
        int sum = 0;
        for(int i = 1; i < n; ++i){
            l[i] = a[i-1] +sum;
            sum = l[i];
        }
        sum = 0;
        r[n-1] = 0;
        for(int i = n - 2; i >= 0; --i){
            r[i] = a[i+1] + sum;
            sum = r[i];
        }
        bool res = false;
        for(int i = 1; i < n-1; ++i){
            if(l[i] == r[i])
                res = true;
        }
        if(res)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

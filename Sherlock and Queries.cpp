#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
#define MOD 1000000007

int modMul(int a, int b){
    return (a * (long long)b) % MOD;
}

int main() {
    vector<long long> a;
    vector<int> b, c;
    int n,m;
    cin >> n >> m;
    for(int i = 0;i < n; ++i){
        int num;
        cin >> num;
        a.push_back(num);
    }
    for(int i = 0;i < m; ++i){
        int num;
        cin >> num;
        b.push_back(num);
    }
    for(int i = 0;i < m; ++i){
        int num;
        cin >> num;
        c.push_back(num);
    }
    map<int ,int > f;
    for(int i = 0; i < m; i++){
        int l = f.count(b[i]) ? f[b[i]] : 1;
        f[b[i]] = modMul(l, c[i]);
    }
    for(auto i = f.begin();i != f.end(); ++i){
        int step = i->first;
        for(int j = step - 1; j < n; j += step){
            a[j] = modMul(a[j], i->second);
        }
    }
    for(int i = 0;i < n; ++i){
        
        if(i == 0)
            cout << a[i];
        else
            cout << " " << a[i];
    }
    return 0;
}

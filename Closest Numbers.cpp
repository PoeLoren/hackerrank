#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define INT_MAX 100000000
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    vector<int> a;
    for(int i =0; i < n; ++i){
        int num;
        cin >> num;
        a.push_back(num);
    }
    sort(a.begin(), a.end());
    int m = INT_MAX;
    for(int i = 1; i < n; ++i){
        m = min(m, a[i] - a[i-1]);
    }
    bool first = true;
    for(int i = 1; i < n; ++i){
        if(a[i] - a[i -1] == m){
            if(first){
                first = false;
                cout << a[i-1] << " " << a[i];
            }
            else{
                cout << " " << a[i - 1] << " " << a[i];
            }
                
        }
    }
    return 0;
}

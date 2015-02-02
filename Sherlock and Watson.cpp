#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> a(n);
    for(int i = 0; i < n; ++i){
        int num;
        cin >> num;
        a[(i + k) % n] = num;
    }
    while(q--){
        int j;
        cin >> j;
        cout << a[j] << endl;
    }
    
    return 0;
}

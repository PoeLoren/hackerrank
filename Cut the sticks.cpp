#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    map<int,int> a;
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        int num;
        cin >> num;
        a[num]++;
    }
    cout << n << endl;
    for(auto it = a.begin(); it != a.end(); ++it){
        n -= it->second;
        if(n != 0)
        cout << n << endl;
    }
    return 0;
}

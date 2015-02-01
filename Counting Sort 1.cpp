#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a[100];
    int n;
    cin >> n;
    fill_n(a, 100, 0);
    for(int i = 0; i < n; ++i){
        int num;
        cin >> num;
        if(num >= 0 && num <= 99){
            a[num]++;
        }
    }
    cout << a[0];
    for(int i = 1; i < 100; ++i){
        cout << " " << a[i];
    }
    return 0;
}

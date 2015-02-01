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
    fill_n(a, 100, 0);
    cin >> n;
    for(int i = 0; i < n; ++i){
        int num;
        string s;
        cin >> num >> s;
        a[num]++;
    }
    int sum = 0;
    bool first = true;
    for(int i =0; i < 100; ++i){
        sum += a[i];
        if(first){
            first = false;
            cout << sum;
        }
        else{
            cout << " " << sum;
        }
    }
    return 0;
}

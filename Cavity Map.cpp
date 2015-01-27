#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a[101][101];
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){
            char c;
            cin >> c;
            a[i][j] = c - '0';
        }
    }
    for(int i = 1; i < n-1; ++i){
        for(int j = 1; j < n -1; ++j){
            if(a[i][j] > a[i][j- 1] && a[i][j] > a[i - 1][j] && a[i][j] > a[i+ 1][j] && a[i][j] > a[i][j+ 1])
                a[i][j] = 10;
        }
    }
    for(int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){
            if(a[i][j] != 10)
                cout << a[i][j];
            else
                cout << "X";
        }
        cout << endl;
    }
    return 0;
}

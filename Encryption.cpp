#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s;
    cin >> s;
    int n = s.size();
    int row = floor(sqrt(n));
    int col = ceil(sqrt(n));
    vector<char> a[10];
    int j = 0;
    for(int i = 0; i < n; ++i){
        a[i % col].push_back(s[i]);
    }
    for(int i = 0; i < col; ++i){
        for(int j = 0; j < a[i].size(); ++j){
            cout << a[i][j];
        }
        cout << " ";
    }
    return 0;
}

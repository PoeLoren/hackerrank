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
    while(n--){
        int num;
        cin >> num;
        a[num]++;
    }
    bool first = true;
    for(int i = 0; i < 100; ++i){
        for(int j = 0; j < a[i]; ++j){
            if(first){
                first = false;
                cout << i;
            }
            else
                cout << " " << i;
        }
    }
    return 0;
}

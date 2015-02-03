#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, m;  
    int min1;
    vector<int> a, b;
    cin >> n;
    for(int i = 0; i < n; ++i){
        int num;
        cin >> num;       
        a.push_back(num);
    }
    cin >> m;
    min1 = 1000001;
    for(int i = 0;i < m; ++i){
        int num;
        cin >> num;
        min1 = min(min1, num);
        b.push_back(num);
    }
    int cnt1[101], cnt2[101];
    fill_n(cnt1, 101, 0);
    fill_n(cnt2, 101, 0);
    for(int i = 0; i < a.size(); ++i){
        cnt1[a[i] - min1]++;
    }
    for(int i = 0; i < b.size(); ++i){
        cnt2[b[i] - min1]++;
    }
    for(int i = 0; i < 101; ++i){
        if(cnt1[i] != cnt2[i] )
            cout << i + min1 << " ";
    }
    
    return 0;
}

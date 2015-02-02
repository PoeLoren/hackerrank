#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    int T;
    cin >> T;
    while(T--){
        int n;
        int m;
        cin >>m;
        
        cin >> n;
        unordered_map<int, int> cnt;
        vector<int> a;
        for(int i = 0; i < n; ++i){
            int num;
            cin >> num;
            a.push_back(num);
            cnt[num] = i;
        }
        for(int i = 0; i < n; ++i ){
            if(cnt.find(m - a[i]) != cnt.end() && i != cnt[m-a[i]])
            {
                cout << i + 1 << " " << cnt[m-a[i]] + 1 << endl;
                break;
            }
        }
    }
    return 0;
}

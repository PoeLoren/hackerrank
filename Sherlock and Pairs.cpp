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
        cin >> n;
        unordered_map<int,int> a;
        for(int i = 0; i < n; ++i){
            int num;
            cin >> num;
            a[num]++;
        }
        long long sum = 0;
        for(auto it = a.begin(); it != a.end(); ++it){
            long k = it->second;
            sum += k * (k - 1) ;
        }
        cout << sum << endl;
    }
    return 0;
}

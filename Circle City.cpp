#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    while(n--){
        long long  r, k;
        cin >> r >> k;
        long long s = static_cast<long long>(sqrt(r)) + 1;
        long long l = 0;
        long long sum = 0;
        while(l <= s){
            int t = l * l + s * s;
            if(t == r){
                if(l == 0)
                    sum += 4;
                else
                    sum += 8;
                l++;
                s--;
            }
            else if(t < r)
                l++;
            else 
                s--;
        }
        if(sum <= k)
            cout << "possible" << endl;
        else
            cout << "impossible" << endl;
    }
    return 0;
}

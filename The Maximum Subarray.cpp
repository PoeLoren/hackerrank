#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define MAX 100005
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    int a[MAX];
    cin >> n;
    while(n--){
        int k;
        cin >> k;
        for(int i = 0;i < k; ++i){
            cin >> a[i];
        }
        int ctnMax = 0, noncMax = 0;
        int sum = 0, maxNeg = a[0];
        for(int i = 0;i < k; ++i){
            maxNeg = max(maxNeg, a[i]);
            if(a[i] > 0)
                noncMax += a[i];
            sum = max(sum + a[i], a[i]);
            ctnMax = max(ctnMax, sum);
        }
        if(maxNeg < 0)
            ctnMax = noncMax  = maxNeg;
        cout << ctnMax << " " << noncMax << endl;
    }
    return 0;
}

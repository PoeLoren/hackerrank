#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

unsigned int flipping(unsigned int a)
{
    for(int i = 0;i < 32;i++){
        unsigned int k = (unsigned int)1 << i;
        if(a & k)
            a = a & ~k;
        else
            a = ~(a ^ ~k);
    }
    return a;
}

int main() {
    int n;
    cin >> n;
    while(n--)
    {
           unsigned int a;
           cin >> a;
           cout << flipping(a) << endl;
    }
    return 0;
}
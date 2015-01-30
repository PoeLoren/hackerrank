#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
void partition(vector <int>&  ar) {
    vector<int> tmp(ar.size());
    int k = 0;
    int j = 0;
    int key = ar[0];
    for(int i = 0; i < ar.size(); ++i){
        if(ar[i] < key)
            ar[j++] = ar[i];
        else
            tmp[k++] = ar[i];
    }
    for(int i = 0;i < k; ++i){
        ar[j + i] = tmp[i];
    }
    
    cout << ar[0];
    for(int i = 1; i < ar.size(); ++i)
        cout << " " << ar[i];
}
int main(void) {
   vector <int>  _ar;
   int _ar_size;
   cin >> _ar_size;
   for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
   int _ar_tmp;
   cin >> _ar_tmp;
   _ar.push_back(_ar_tmp); 
}

partition(_ar);
   
   return 0;
}

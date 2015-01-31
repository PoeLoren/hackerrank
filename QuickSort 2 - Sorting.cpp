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

int partition(vector <int>&  ar, int l ,int r) {
    vector<int> tmp(ar.size());
    int k = 0;
    int j = l;
    int key = ar[l];
    for(int i = l; i < r; ++i){
        if(ar[i] < key)
            ar[j++] = ar[i];
        else
            tmp[k++] = ar[i];
    }
    for(int i = 0;i < k; ++i){
        ar[j + i] = tmp[i];
    }
    return j;
}
void quickSort(vector <int>&  ar,int start, int ar_size) {
    if(ar_size <= 1)
        return;
    int p = partition(ar, start, start + ar_size);
    quickSort(ar, start, p - start);
    quickSort(ar, p + 1, ar_size - (p - start) -1);
    cout << ar[start];
    for(int i = start + 1; i < start + ar_size; ++i)
        cout << " " << ar[i];
    cout << endl;

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

    quickSort(_ar, 0, _ar_size);
   
   return 0;
}

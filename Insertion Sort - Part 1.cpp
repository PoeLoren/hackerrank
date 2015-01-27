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
#define INT_MIN -1000000
void output(const vector<int>& a){
    cout << a[1];
    for(int j = 2; j < a.size(); ++j){
        cout << " " << a[j];
    }
    cout << endl;
}
void insertionSort(vector <int>&  a) {
    a.insert(a.begin(), INT_MIN);
    int n = a.size();
    int num = a[n - 1];
    for(int i = n-2; i >= 0; --i){
        if(a[i] > num){
            a[i + 1] = a[i];
            output(a);
        }else{
            a[i + 1] = num;
            output(a);
            break;
        }
    }

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

insertionSort(_ar);
   
   return 0;
}

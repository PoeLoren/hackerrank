#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int partition(vector<int>& a, int mid, int l, int r){
    int key = a[r -1];
    int j = l - 1;
    for(int i = l; i < r - 1; ++i ){
        if(a[i] < key){
            j++;
            swap(a[i], a[j]);
        }
    }
    j++;
    swap(a[j], a[r - 1]);
    if(j == mid)
        return a[j];
    else if(j < mid){
        return partition(a, mid, j + 1, r);
    }
    else{
        return partition(a, mid, l, j);
    }
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    vector<int> a;
    for(int i = 0; i < n; ++i){
        int num;
        cin >> num;
        a.push_back(num);
    }
    int mid = n / 2;
    cout << partition(a, mid, 0, a.size());
    return 0;
}

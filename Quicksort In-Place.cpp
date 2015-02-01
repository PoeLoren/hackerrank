#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int partition(vector<int>& a, int l, int r){
    int key = a[r - 1];
    int j = l - 1;
    for(int i = l; i < r; ++i){
        if(a[i] < key){
            j++;
            swap(a[i], a[j]);
        }
    }
    j++;
    swap(a[j], a[r-1]);
    return j;
}

void quickSort(vector<int>& a, int l, int r){
    if(r - l <= 1)
        return ;
    int p;
    p = partition(a, l ,r);
    cout << a[0];
    for(int i = 1; i < a.size(); ++i)
        cout << " " << a[i];
    cout << endl;
    quickSort(a, l, p);
    quickSort(a, p + 1, r);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int> a;
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        int num;
        cin >> num;
        a.push_back(num);
    }
    quickSort(a, 0, a.size());
    return 0;
}

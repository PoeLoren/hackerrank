#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int qNum = 0;

int partition(vector<int>& a, int l, int r){
    int j = l - 1;
    int key = a[r-1];
    for(int i = l; i < r; ++i){
        if(a[i] < key){
            ++j;
            swap(a[i], a[j]);
            qNum++;
        }
    }
    j++;
    swap(a[j], a[r - 1]);
    qNum++;
    return j;
}

void quickSort(vector<int>& a, int l, int r){
    if(r - l <= 1)
        return ;
    int p = partition(a, l, r);
    quickSort(a, l, p);
    quickSort(a, p + 1, r);
}


int iNum = 0;

void insertSort(vector<int> a){
    for(int i = 1; i < a.size(); ++i){
        int key = a[i];
        int j = i - 1;
        while(j >= 0 && a[j] > key){
            a[j + 1] = a[j];
            iNum++;
            j--;
        }
        a[j+ 1] = key;
    }
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
    insertSort(a);
    quickSort(a, 0 , a.size());
    cout << iNum - qNum << endl;
    return 0;
}

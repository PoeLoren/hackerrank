#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


bool checkSwap(vector<int>& v, int l, int r){
    bool ret = true;
    int n = v.size();
    for (int i = l + 2; i < r; ++i)
    {
        if (v[i] < v[i-1])
        {
            ret = false;
        }
    }
    if (ret && 
        ((l == 0 && r == n - 1) || 
        (l == 0 && v[0] < v[r + 1]) || 
        (r == n - 1 && v[l - 1] < v[r]) || 
        (v[l] > v[r-1] &&  v[l] < v[r + 1] && v[r] > v[l-1] && v[r] < v[l + 1] )))
    {
        return true;
    }
    return false;
}

bool checkReverse(vector<int> v, int l, int r){
    bool ret = true;
    int n = v.size();
    for(int i = l + 1; i <= r; ++i){
        if(v[i] > v[i -1])
            ret = false;
    }
    if(ret && 
        ((l == 0 && r == n - 1) ||
        (l == 0 && v[0] < v[r + 1]) || 
        (r == n - 1 && v[l - 1] < v[r]) || 
        (v[l] < v[r + 1] && v[r] > v[l-1])))
    {
        return true;
    }
    return false;

}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    vector<int> a;
    cin >> n;
    for(int i = 0; i < n; ++i){
        int num;
        cin >> num;
        a.push_back(num);
    }
    bool flag = true;
    for(int i = 1; i < n; ++i){
        if(a[i] < a[i - 1]){
            flag = false;
            break;
        }
    }
    if(flag){
        cout << "yes";
        return 0;
    }
    else{
        int i = 0;
        int j = n - 1;
        while(i < n - 1 && a[i] < a[i + 1]){
            i++;
        }
        while(j >= 0 && a[j] > a[j - 1]){
            j--;
        }
        if(checkSwap(a, i, j)){
            cout << "yes" << endl;
            cout << "swap " << i + 1 << " " << j+ 1 << endl;
            return 0;
        }
        if(checkReverse(a, i, j)){
            cout << "yes" << endl;
            cout << "reverse " << i + 1 << " " << j + 1 << endl;
            return 0;
        } 
    }
    cout << "no";
    return 0;
}
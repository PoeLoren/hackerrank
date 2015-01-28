#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Node{
    vector<int> children;
};

Node a[102];
int res = 0;
int dfs(int n, int f){
    int sum = 1;
    for(int i = 0; i < a[n].children.size(); ++i){
        if( a[n].children[i] != f)
            sum += dfs(a[n].children[i], n);
    }
    if(sum > 0 && sum % 2 == 0 && n != 1)
        res++;
    return sum;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, m;
    cin >> n >> m;
    while(m--){
        int v1, v2;
        cin >> v1 >> v2;
        a[v1].children.push_back(v2);
        a[v2].children.push_back(v1);
    }
    dfs(1, 0);
    cout << res;
    return 0;
}

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

struct Node{
    string s;
    int idx;
    Node(int a, string b): idx(a), s(b){};
};
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    vector<Node*> a[100];
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        int num;
        string s;
        cin >> num >> s;
        Node* node = new Node(i, s);
        a[num].push_back(node);
    }
    int mid = n / 2;
    bool first = true;
    for(int i = 0; i < 100; ++i){
        for(int j = 0; j < a[i].size(); ++j){
            if(first){
                first = false;
                if(a[i][j]->idx < mid)
                    cout << "-";
                else
                    cout << a[i][j]->s;
            }
            else{
                if(a[i][j]->idx < mid)
                    cout << " -";
                else
                    cout << " " << a[i][j]->s;
            }
        }
    }
    return 0;
}

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define INT_MAX 9999999

struct Node{
	int v;
	int sum;
	vector<int> adj;
	Node():v(0), sum(0){};
	Node(int a):v(a), sum(0){};
};
vector<Node> a;
int vSum = 0;

int minDiff = INT_MAX;

int calSum(int cur, int last, int s){
	int sum = 0;
	for(int i = 0; i < a[cur].adj.size(); ++i){
		if(a[cur].adj[i] != last)
			sum += calSum(a[cur].adj[i], cur, s);
	}
	s = sum + a[cur].v;
	minDiff = min(minDiff, abs(s - (vSum - s)));
	return s;
}

int main() {
	int n;
	cin >> n;
	a.resize(n);
	for(int i = 0; i < n; ++i){
		cin >> a[i].v;
		vSum += a[i].v;
	}

	for(int i = 0; i < n - 1; ++i){
		int v1, v2;
		cin >> v1 >> v2;
		a[v1 - 1].adj.push_back(v2 - 1);
		a[v2-1].adj.push_back(v1 - 1);
	}

	calSum(0, -1,  0);
	cout << minDiff << endl;
	return 0;
}

#include <iostream>
using namespace std;

int height(int n) {
    int ret = 1;
    for(int i = 1; i <= n; i++){
        if(i & 1)
            ret *= 2;
        else
            ret += 1;
    }
    return ret;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << height(n) << endl;
    }
}
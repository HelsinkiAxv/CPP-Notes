#include <iostream>
using namespace std;

int elephantWays(int n, int m) {
    if (n == 1 && m == 1) return 1;
    
    int ways = 0;
    for (int i = 1; i < n; ++i) {
        ways += elephantWays(i, m);
    }
    for (int j = 1; j < m; ++j) {
        ways += elephantWays(n, j);
    }
    
    return ways;
}

int main() {
    int n, m;
    cin >> n >> m;
    
    cout << elephantWays(n, m) << endl;
    
    return 0;
}

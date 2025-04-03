#include <vector>
#include <iostream>

using namespace std;

int climbStairs(int n, int k) {
    if (n == 0) return 1;
    if (n < 0) return 0;
    int ans = 0;
    for (int i = 1; i <= k; ++i) {
        ans += climbStairs(n - i, k);
    }
    return ans;
}


int main() {
    int n = 4;
    int k = 3;
    
    cout << climbStairs(n,k) << endl;
    
    return 0;
}
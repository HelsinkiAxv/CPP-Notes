#include <iostream>
using namespace std;

int ways(int i, int j) {
    if(!i or !j) return 1;

    return ways(i - 1, j) + ways(i, j - 1);
}

int main() {
    int i,j;
    cin >> i >> j;
    cout << ways(i,j) << endl;

    return 0;
}
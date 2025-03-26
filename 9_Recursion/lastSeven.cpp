#include <iostream>
using namespace std;

int lastIndex(int *a, int n) {
    if (n == 0) return -1;

    if (a[n - 1] == 7) return n - 1;

    return lastIndex(a, n - 1);
}

int main() {
    int a[] = {1, 7, 4, 2, 7, 7, 3};
    int n = sizeof(a) / sizeof(int);
    int target = 7;

    cout << "Last Index: " << lastIndex(a, n) << endl;

    cout << endl;
    
    return 0;
}
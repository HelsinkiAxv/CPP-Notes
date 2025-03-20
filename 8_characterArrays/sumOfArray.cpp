#include <iostream>
using namespace std;

// int sumOfArray (int n, int arr[]) {
//     if (n < 0) {
//         return 0;
//     }
//     return arr[n-1] + sumOfArray(n-1,arr);
// }

int sumOfArray (int n, int *arr) {
    if (n == 0) return 0;
    return arr[0] + sumOfArray(n - 1, arr + 1);
}

int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr) / sizeof(int);
    cout << sumOfArray(n,arr) << endl;
}
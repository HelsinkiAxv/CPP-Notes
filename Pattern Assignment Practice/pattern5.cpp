/*
    1
  2 1
3 2 1
*/

#include <iostream>
using namespace std;

int main() {

    int n = 5;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }
        for (int j = i; j >= 1; j--) {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}
/*
        * * * * *
      *      *
    *      *
  *      *
* * * * *
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        for (int j = (n - i - 1); j > 0; --j) {
            cout << "  ";
        }
        if (i % (n - 1) == 0) {
            for (int j = 0; j < n; ++j) {
                cout << "* ";
            }
        }
        else {
            for (int j = 0; j < n; ++j) {
                if (j % (n - 1) == 0) {
                    cout << "* ";
                }
                else {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }
}
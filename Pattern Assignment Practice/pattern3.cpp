/*
*****
 ****
  ***
   **
    *
*/
#include <iostream>
using namespace std;

int main() {

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j <= i - 1; ++j) {
            cout << "  ";
        }
        for (int j = 0; j < 5 - i; ++j) {
            cout << "*" << " ";
        }
        cout << endl;
    }

    return 0;
}
/*
1 2 3 4 5
5 4 3 2 1
1 2 3 4 5
5 4 3 2 1
*/


#include <iostream>
using namespace std;

int main() {

    for (int i = 0; i < 5; ++i) {
        if (i % 2 == 0) {
            for (int j = 0; j < 5; ++j) {
                cout << j + 1 << " ";
            }
            cout << endl;
        }
        else {
            for (int j = 5; j > 0; --j) {
                cout << j << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
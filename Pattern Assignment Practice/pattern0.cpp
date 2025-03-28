/*
print 2d array pattern 
1 2 3 4 5 6 7
1 2 3 4 5 6 7
-
-
-
-
1 2 3 4 5 6 7 
*/

#include <iostream>
using namespace std;

int main() {

    int a[7][7];
    for (int i = 0; i < 7; ++i) {
        for (int j = 0; j < 7; ++j) {
            a[i][j] = j + 1;
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
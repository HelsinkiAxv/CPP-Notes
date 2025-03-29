/*
+     + + + + 
+     +       
+     +       
+ + + + + + +
      +     +
      +     +
+ + + +     +
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i){
        if ((n / 2) == i) {
            for (int j = 0; j < n; ++j) {
                cout << "+ ";
            }
        }
        else if (i == 0) {
            for (int j = 0; j < n; ++j) {
                if (j < (n / 2) and j > 0) {
                    cout << "  ";
                }
                else cout << "+ ";
            }
        }
        else if (i == (n - 1)) {
            for (int j = 0; j < n; ++j) {
                if (j > (n / 2) and j < (n - 1)) {
                    cout << "  ";
                }
                else cout << "+ ";
            }
        }
        else if (i > 0 and i < (n / 2)) {
            for (int j = 0; j < (n / 2) + 1; ++j) {
                if (j == 0 or j == (n / 2)) {
                    cout << "+ ";
                }
                else cout << "  ";
            }
        }
        else {
            for (int j = 0; j < n; ++j) {
                if (j == (n / 2) or j == (n - 1)) {
                    cout << "+ ";
                }
                else cout << "  ";
            }
        }

        cout << endl;
    }

    return 0;
}
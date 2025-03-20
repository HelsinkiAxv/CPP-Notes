#include <iostream>
using namespace std;

int factorial (int n) {
    if (n == 1) {
        return 1;
    }

    int y = n * factorial(n-1);

    return y;

}

int main() {
    int x;
    cin >> x;

    cout << factorial(x);
}


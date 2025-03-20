#include<iostream>
using namespace std;

int sumof (int n) {
    if (n == 1) {
        return 1;
    }
    
    return n + sumof(n-1);
}

int main() {
    int x;
    cin >> x;

    cout << sumof(x) <<endl;

    return 0;
}
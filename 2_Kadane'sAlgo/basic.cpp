#include <iostream>
using namespace std;

int main() {
    //Program for Linear Search
    int a[] = {1,2,3,4,5}; // Initialization of Array
    int n = sizeof(a) / sizeof(int);
    
    int key = 41;
    int i;

    for (int i = 0; i < n; ++i) {
        
        if (a[i] == key) {
            cout << "Found Index at: " << i << endl;
            return 0;
        }
    }

    if (true) {
        cout << "Key not Found \n";
    }

    return 0;
}
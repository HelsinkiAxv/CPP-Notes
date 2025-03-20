#include<iostream>
#include<cstring>
using namespace std;

int main() {
    int n;
    cin >> n;
    char a[100];
    cin.get();

    // Number ke baad whitespace charater toh problem hai learn how to solve it

    for (int i = 0; i < n; ++i) {
        // cin.getline(a,100);
        cin >> a;

        cout << "You Entered " << i << ":" << a<< endl;
        
    }
    return 0;
}

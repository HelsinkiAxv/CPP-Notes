#include <iostream>
using namespace std;

// it is used to directly convert a string to integer
// int stringToInteger(string str) {
//     return stoi(str); 
// }

int stringToInt(char *a, int n) {
    if (n == 0) return 0;

    return stringToInt(a,n-1)*10 + (a[n-1] - '0');
}


int main() {
    char a[] = "12345";
    int n = sizeof(a)/sizeof(char) - 1;
    int result = stringToInt(a,n);
    cout << "Converted Integer: " << result << endl;

    return 0;
}

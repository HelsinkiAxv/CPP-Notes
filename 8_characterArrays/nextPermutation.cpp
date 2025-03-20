#include <iostream>
#include <cstring>
using namespace std;

int findIndex(char a[]) {
    int k = -1;
    int lena = strlen(a);
    for (int i = lena - 2; i >= 0; --i) {
        if (a[i] < a[i+1]) {
            k = i;
            break;
        }
    }
    return k;
}

void reverseString (char a[], int i, int j) {
    while (i < j) {
        swap(a[i],a[j]);
        i++;
        j--;
    }
}

int main() {

    // Input: bac
    // Output: bca

    // Input: dcabb
    // Output: dcbab
    char a[1000];
    cin >> a;
    
    int k = findIndex(a);

    if (k == -1) {
        reverseString(a, 0, strlen(a) - 1);
        cout << a << endl;
    }
    else {
        int j = strlen(a) - 1;
        char x;
        while (j > k) {
            if (a[j] > a[k]) {
                swap(a[j] , a[k]);
                break;
            }
            j--;
        }
        reverseString(a, k+1, strlen(a) - 1);
        cout << a << endl;
    }

    return 0;
}
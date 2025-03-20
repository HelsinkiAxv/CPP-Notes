#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char a[100] = "Coding ";
    char b[] = "Blocks";
    int i = strlen(a);
    int j = 0;
    int length = strlen(b) + i;
    while (i <= length) {
        a[i] = b[j];
        i++;
        j++;
    }
    cout << a << endl;
    return 0;
}
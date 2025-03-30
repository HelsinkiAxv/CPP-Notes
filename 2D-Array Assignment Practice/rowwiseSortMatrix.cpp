/*
Given a 2D array, sort each of its rows and print the result.

Input Format
First line contains 2 integers - r & c. Next r lines contains c integers each denoting the matrix elements.

Constraints
1 <= R,C <= 100

Output Format
Print the modified matrix

Sample Input
4 5
13 5 13 9 11 
5 10 11 4 6 
6 10 17 12 16 
8 11 7 18 5 
Sample Output
5 9 11 13 13 
4 5 6 10 11 
6 10 12 16 17 
5 7 8 11 18 
*/

#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_RC 100  

int main() {
    int r, c;
    cin >> r >> c;

    int matrix[MAX_RC][MAX_RC];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < r; i++) {
        sort(matrix[i], matrix[i] + c);
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

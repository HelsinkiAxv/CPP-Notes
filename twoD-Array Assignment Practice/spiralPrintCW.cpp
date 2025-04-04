/*
Take as input a 2-d array.Print the 2-D array in sprial form clockwise.

Input Format
Two integers M(row) and N(colomn) and further M * N integers(2-d array numbers).

Constraints
Both M and N are between 1 to 100.

Output Format
All M * N integers separated by commas with 'END' written in the end(as shown in example).

Sample Input
4 4
11 12 13 14
21 22 23 24
31 32 33 34
41 42 43 44
Sample Output
11, 12, 13, 14, 24, 34, 44, 43, 42, 41, 31, 21, 22, 23, 33, 32, END
Explanation
For spiral level clockwise traversal, Go for first row-> last column ->last row -> 
first column and then do the same traversal for the remaining matrix .
*/

#include <iostream>
using namespace std;

#define MAX_SIZE 100  

int main() {
    int M, N;
    cin >> M >> N;

    int matrix[MAX_SIZE][MAX_SIZE];

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matrix[i][j];
        }
    }

    int top = 0, bottom = M - 1, left = 0, right = N - 1;
    int totalElements = M * N, count = 0;

    while (count < totalElements) {
        for (int i = left; i <= right && count < totalElements; i++) {
            cout << matrix[top][i] << ", ";
            count++;
        }
        top++;

        for (int i = top; i <= bottom && count < totalElements; i++) {
            cout << matrix[i][right] << ", ";
            count++;
        }
        right--;

        for (int i = right; i >= left && count < totalElements; i--) {
            cout << matrix[bottom][i] << ", ";
            count++;
        }
        bottom--;

        for (int i = bottom; i >= top && count < totalElements; i--) {
            cout << matrix[i][left] << ", ";
            count++;
        }
        left++;
    }

    cout << "END" << endl;

    return 0;
}
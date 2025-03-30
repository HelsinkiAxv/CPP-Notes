/*
Take as input a 2-d array. Print the 2-D array in spiral form anti-clockwise.


Input Format
Two integers M(row) and N(colomn) and further M * N integers(2-d array numbers).


Constraints
Both M and N are between 1 to 10.


Output Format
All M * N integers separated by commas with 'END' written in the end(as shown in example).


Sample Input
4 4
11 12 13 14
21 22 23 24
31 32 33 34
41 42 43 44
Sample Output
11, 21, 31, 41, 42, 43, 44, 34, 24, 14, 13, 12, 22, 32, 33, 23, END
Explanation
For spiral level anti-clockwise traversal, Go for first column-> last row ->last column-> 
first row and then do the same traversal for the remaining matrix .
*/

#include <iostream>
using namespace std;

#define MAX_SIZE 10  

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
        for (int i = top; i <= bottom && count < totalElements; i++) {
            cout << matrix[i][left] << ", ";
            count++;
        }
        left++;

        for (int i = left; i <= right && count < totalElements; i++) {
            cout << matrix[bottom][i] << ", ";
            count++;
        }
        bottom--;

        for (int i = bottom; i >= top && count < totalElements; i--) {
            cout << matrix[i][right] << ", ";
            count++;
        }
        right--;

        for (int i = right; i >= left && count < totalElements; i--) {
            cout << matrix[top][i] << ", ";
            count++;
        }
        top++;
    }

    cout << "END" << endl;

    return 0;
}

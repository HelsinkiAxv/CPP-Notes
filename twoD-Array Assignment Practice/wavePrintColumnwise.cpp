/*
Take as input a two-d array. Wave print it column-wise.

Input Format
Two integers M(row) and N(colomn) and further M * N integers(2-d array numbers).

Constraints
Both M and N are between 1 to 10.

Output Format
All M * N integers seperated by commas with 'END' wriiten in the end(as shown in example).

Sample Input
4 4
11 12 13 14
21 22 23 24
31 32 33 34
41 42 43 44
Sample Output
11, 21, 31, 41, 42, 32, 22, 12, 13, 23, 33, 43, 44, 34, 
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

    for (int col = 0; col < N; col++) {
        if (col % 2 == 0) { 
            for (int row = 0; row < M; row++) {
                cout << matrix[row][col] << ", ";
            }
        } else { 
            for (int row = M - 1; row >= 0; row--) {
                cout << matrix[row][col] << ", ";
            }
        }
    }

    cout << "END" << endl;

    return 0;
}

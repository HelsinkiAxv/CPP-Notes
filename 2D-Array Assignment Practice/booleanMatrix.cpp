/*
Given a boolean matrix mat[M][N] of size M X N, modify it such that if a matrix cell 
mat[i][j] is 1 (or true) then make all the cells of ith row and jth column as 1.

Input Format
First line contains two integers m and n denoting the dimensions of the matrix Next m lines contains n integers each.

Constraints
1 <= m*n <= 106

Output Format
Print the modified matrix

Sample Input
2 2
1 0
0 0
Sample Output
1 1
1 0
Explanation

*/

#include <iostream>
using namespace std;

#define MAX_SIZE 1000  

int main() {
    int M, N;
    cin >> M >> N;

    int mat[MAX_SIZE][MAX_SIZE];
    bool row[MAX_SIZE] = {false}, col[MAX_SIZE] = {false};

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> mat[i][j];
            if (mat[i][j] == 1) {
                row[i] = true;
                col[j] = true;
            }
        }
    }

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (row[i] || col[j]) {
                mat[i][j] = 1;
            }
        }
    }

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

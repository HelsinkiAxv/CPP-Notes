/*
Given an integer 'n'. Print all the possible pairs of 'n' balanced parentheses.
The output strings should be printed in the sorted order considering '(' has higher value than ')'.

Input Format
Single line containing an integral value 'n'.

Constraints
1<=n<=11

Output Format
Print the balanced parentheses strings with every possible solution on new line.

Sample Input
2
Sample Output
()() 
(()) 
*/

#include <bits/stdc++.h>
using namespace std;

void generateParentheses(int open, int close, int n, string current) {
    if (open == n && close == n) {
        cout << current << endl;
        return;
    }

    if (close < open) generateParentheses(open, close + 1, n, current + ")");
    if (open < n) generateParentheses(open + 1, close, n, current + "(");
}

int main() {
    int n;
    cin >> n;
    generateParentheses(0, 0, n, "");
    return 0;
}


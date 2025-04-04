/*
Take as input N, a number. Print odd numbers in decreasing sequence (up until 0) and even numbers in increasing sequence (up until N) using Recursion

Input Format

Constraints
1 <= N <=1000

Output Format

Sample Input
5
Sample Output
5
3
1
2
4
*/

#include<iostream>
using namespace std;

void printOdd(int n) {
	if (n < 1) return;
	if (n % 2 != 0) {
		cout << n << endl;
		printOdd(n - 2);
	}
	else printOdd(n - 1);
}

void printEven(int n, int current) {
	if (current > n) return;
	if (n % 2 == 0) {
		cout << current << endl;
		printEven(n, current + 2);
	}
	else printEven(n - 1, current);
}

int main() {
	int n;
	cin >> n;
	printOdd(n);
	printEven(n,2);

	return 0;
}
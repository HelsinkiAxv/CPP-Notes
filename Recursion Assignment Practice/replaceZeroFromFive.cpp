/*
Given an integer N, now you have to convert all zeros of N to 5.

Input Format
The first Line takes input integer N, denoting the number.

Constraints
1<=N<=10000

Output Format
Print the number after replacing all 0's with 5.

Sample Input
103
Sample Output
153
Explanation
Testcase 1: after replacing 0 with 5 ,number will become 153.
Testcase 2: there is no zero in number so it will remain same.
*/

#include<iostream>
using namespace std;

int replace(int n) {
	if (n == 0) return 0;

	int digit = n % 10;
	if (digit == 0) {
		digit = 5;
	}
	return replace(n / 10) * 10 + digit;
}

int ans(int n) {
	if (n == 0) return 5;
	return replace(n);
}

int main () {
	int n;
	cin >> n;
	
	cout << ans(n) << endl;

	return 0;
}
/*
Take as input N, the size of array. Take N more inputs and store that in an array. Take as input M, a number. Write a recursive function which returns the last index at which M is found in the array and -1 if M is not found anywhere. Print the value returned.

Input Format
Enter a number N and add N more numbers to an array, then enter number M to be searched

Constraints
None

Output Format
Display the last index at which the number M is found

Sample Input
5
3
2
1
2
3
2
Sample Output
3
*/

#include<iostream>
using namespace std;

int index(int *arr, int n, int target) {
	if (n == 0) {
		if (arr[0] != target) {
			cout << "-1" << endl;
			return -1;
		}
		else { 
			cout << "0" << endl;
			return 0;
		}
	}
	if (arr[n] == target) {
		cout << n << endl;
		return 0;
	}
	return index(arr, n - 1, target);
}

int main() {
	int n;
	cin >> n;
	int arr[n];

	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}

	int target;
	cin >> target;

	index(arr, n - 1, target);
	
	return 0;
}
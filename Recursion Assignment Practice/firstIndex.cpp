/*
Take as input N, the size of array. Take N more inputs and store that in an array. Take as input M, a number. 
Write a recursive function which returns the first index at which M is found in the array and -1 if M is not found anywhere. 
Print the value returned.

Input Format
Enter a number N and add N more elements to an array, then enter a number M

Constraints
None

Output Format
Display the first index at which number M is found

Sample Input
5
3
2
1
2
2
2
Sample Output
1
*/

#include<iostream>
using namespace std;

int firstIndex(int *arr, int n, int target, int count) {
	if (count == n) {
		cout << "-1" << endl;
		return -1;
	}
	if (arr[count] == target) {
		cout << count << endl;
		return count;
	}
	return firstIndex(arr, n, target, count + 1);
}

int main() {
	int n;
	cin >> n;
	int arr[n];
	int count = 0;

	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}
	int target;
	cin >> target;
	
	firstIndex(arr, n, target,count);
	
	return 0;
}
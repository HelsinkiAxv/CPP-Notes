/*
Take as input S, a string. 
Write a function that returns true if the string is a palindrome and false otherwise. 
Print the value returned.

Input Format
String

Constraints
String length between 1 to 1000 characters


Output Format
Boolean


Sample Input
abba
Sample Output
true
Explanation
A string is said to be palindrome if reverse of the string is same as string. 
For example, “abba” is palindrome as it's reverse is "abba", but “abbc” is not palindrome as it's reverse is "cbba".
*/

#include<iostream>
#include<string>
using namespace std;
int main() {
	string s;
	cin >> s;
	string reverse = "";
	int len = s.length();

	for (int i = len - 1; i >= 0; --i) {
		reverse += s[i];
	}

	if (s == reverse) {
		cout << "true";
	}
	else cout << "false";

	return 0;
}
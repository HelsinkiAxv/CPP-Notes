/*
A Good String is a string which contains only vowels (a,e,i,o,u). 
Given a string S, print a single positive integer N where N is the length of the longest substring of S that is also a Good String.


Input Format
A string 'S' containing only lowercase English letters ('a' to 'z').


Constraints
Length of string < 10^5


Output Format
A single positive integer N, where N is the length of the longest sub-string of S that is also a Good String. 
If no valid Good String exists, print 0.


Sample Input
cbaeicde
Sample Output
3
Explanation
Longest good substring is "aei"
*/

#include<iostream>
#include <string>
using namespace std;
int main() {
	string s;
	cin >> s;
	int len = s.length();
	int count = 0;
	int ans = 0;

	for (int i = 0; i < len; ++i) {
		if (s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u') {
			count += 1;
			ans = max(ans,count);
		}
		else {
			count = 0;
		}
	}

	cout << ans << endl;

	return 0;
}
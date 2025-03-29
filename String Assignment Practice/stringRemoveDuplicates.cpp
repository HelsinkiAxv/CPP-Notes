/*Take as input S, a string. Write a function that removes all consecutive duplicates. Print the value returned.


Input Format
String


Constraints
A string of length between 1 to 1000


Output Format
String


Sample Input
aabccba
Sample Output
abcba
Explanation
For the given example, "aabccba", Consecutive Occurrence of a is 2, b is 1, and c is 2.

After removing all of the consecutive occurences, the Final ans will be : - "abcba".
*/

#include<iostream>
#include<string>
using namespace std;

int main() {
	string s;
	cin >> s;
	string ans = "";
	int len = s.length();
	for (int i = 0; i < len + 1; ++i) {
		if (s[i] != s[i + 1]) {
			ans += s[i];
		}
		else continue;
	}
	cout << ans;
	return 0;
}
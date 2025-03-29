/*
Take as input S, a string.
Write a program that gives the count of substrings of this string which are palindromes and Print the ans.

Input Format
Single line input containing a string

Constraints
Length of string is between 1 to 1000.

Output Format
Integer output showing the number of palindromic substrings.

Sample Input
abc
Sample Output
3
Explanation
For the given sample case , the palindromic substrings of the string abc are "a","b" and "c".So, the ans is 3.
*/

#include <iostream>
using namespace std;

int countPalindromicSubstring(string s) {
    int len = s.length();
    int count = 0;

    for (int center = 0; center < 2 * len - 1; ++center) {
        int left = center / 2;
        int right = left + (center % 2);

        while (left >= 0 and right < len and s[left] == s[right]) {
            cout << left<< " " << s[left] << ' ' << s[right] << right << " " << endl; // This line will make you understamd the flow
            count++;
            left--;
            right++;
        }
    }

    return count;
}

int main() {
    string s;
    cin >> s;

    cout << countPalindromicSubstring(s) << endl;

    return 0;
}
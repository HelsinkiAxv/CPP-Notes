/*
Take as input str, a number in form of a string. Write a recursive function to convert the number in string 
form to number in integer form. E.g. for “1234” return 1234. Print the value returned.

Input Format
Enter a number in form of a String

Constraints
1 <= Length of String <= 10

Output Format
Print the number after converting it into integer

Sample Input
1234
Sample Output
1234
Explanation
Convert the string to int. Do not use any inbuilt functions.
*/

#include <bits/stdc++.h>
using namespace std;

int stringToInt(string s, int n) {
    if (n == 0) return 0;  

    int lastDigit = s[n - 1] - '0';  
    int smallAns = stringToInt(s, n - 1);  

    return smallAns * 10 + lastDigit;  
}

int main() {
    string s;
    cin >> s;

    cout << stringToInt(s, s.length()) << endl;

    return 0;
}

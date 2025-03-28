/*
Take as input S, a string. Write a function that does basic string compression. 
Print the value returned. E.g. for input “aaabbccds” print out a3b2c2d1s1.

Input Format
A single String S

Constraints
1 < = length of String < = 1000

Output Format
The compressed String.

Sample Input
aaabbccds
Sample Output
a3b2c2d1s1
Explanation
In the given sample test case 'a' is repeated 3 times consecutively, 'b' is repeated twice, 'c'
 is repeated twice and 'd and 's' occurred only once.
*/

#include <iostream>
#include <string>
using namespace std;

string compressedString(const string &s) {

    if (s.empty()) return "";

    int count = 1;
    string compressed = "";

    for (int i = 1; i < s.length(); ++i) {
        if(s[i] == s[i - 1]) {
            count++;
        }
        else {
            compressed += s[i - 1] + to_string(count);
            count = 1;
        }
    }

    compressed += s.back() + to_string(count);

    return compressed;
}

int main() {
    string s;
    cin >> s;

    cout << compressedString(s) << endl;

    return 0;
}
/*
Given a string S, the task is to identify the character that appears most frequently. 
It is guaranteed that only one character has the highest frequency.

Input Format
A single string S (1 ≤ |S| ≤ 100), consisting of lowercase and uppercase English letters.

Constraints
A string of length between 1 to 100.

Output Format
A single character that appears most frequently in the given string.

Sample Input
aaabacB
Sample Output
a
Explanation
Frequency of each character in the string:

'a' → 4 times
'b' → 2 times
'c' → 1 time
'B' → 1 time
Note: Since 'B' (uppercase) is different from 'b' (lowercase), they are counted separately.

The character with the highest frequency is 'a' (appearing 4 times).
*/

#include <iostream>
using namespace std;

char mostFrequentCharacter(const string &s) {
    int freq[256] = {0};

    for (char c : s) {
        freq[(int)c]++;
    }

    char maxChar = s[0];
    int maxFreq = freq[(int)s[0]];

    for (char c : s) {
        if (freq[(int)c] > maxFreq) {
            maxFreq = freq[(int)c];
            maxChar = c;
        }
    }
    
    return maxChar;
}

int main() {
    string s;
    cin >> s;
    cout << mostFrequentCharacter(s) << endl;
    return 0;
}
/*
Take as input S, a string. 
Write a function that does basic string compression. 
Print the value returned. E.g. for input “aaabbccds” print out a3b2c2ds.


Input Format
A single String S.


Constraints
A string of length between 1 to 1000


Output Format
The compressed String.


Sample Input
aaabbccds
Sample Output
a3b2c2ds
Explanation
In the given sample test case 'a' is repeated 3 times consecutively, 'b' is repeated twice, 'c' is repeated twice.
But, 'd' and 's' occurred only once that's why we do not write their occurrence.
*/

#include <iostream>
#include <string>
using namespace std;

string compressString(const string &S) {
    if (S.empty()) return "";
    
    string compressed = "";
    int count = 1;
    
    for (size_t i = 1; i < S.length(); i++) {
        if (S[i] == S[i - 1]) {
            count++;
        } else {
            compressed += S[i - 1];
            if (count > 1) {
                compressed += to_string(count);
            }
            count = 1;
        }
    }
    
    compressed += S.back();
    if (count > 1) {
        compressed += to_string(count);
    }
    
    return compressed;
}

int main() {
    string S;
    cin >> S;
    cout << compressString(S) << endl;
    return 0;
}

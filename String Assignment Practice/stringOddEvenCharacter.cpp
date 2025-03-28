// Take as input S, a string. 
// Write a function that replaces every even character with the character having just higher ASCII code and 
// every odd character with the character having just lower ASCII code. Print the value returned.
// 
// 
// Input Format
// String
// 
// 
// Constraints
// Length of string should be between 1 to 1000.
// 
// 
// Output Format
// String
// 
// 
// Sample Input
// abcg
// Sample Output
// badf

#include <iostream>
#include <string>
using namespace std;

string oddEvenChange(const string &s) {
    string modify = s;
    int count = 0;
    for (char &c : modify) {
        if (count % 2 == 0) {
            modify[count] = s[count] + 1;
            count += 1;
        }
        else {
            modify[count] = s[count] - 1;
            count += 1;
        }
    }
    return modify;
}

int main() {
    string s;
    cin >> s;

    cout << oddEvenChange(s) << endl;

    return 0;
}
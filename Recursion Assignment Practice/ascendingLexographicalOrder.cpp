/*
Monu bhaiya is given a string s, his task is to remove duplicate letters so that every letter appears once and only once. he must make sure his result is the smallest in lexicographical order among all possible results.

Input Format
String

Constraints
1 <= s.length <= 104
s consists of lowercase English letters.

Output Format
Print resulting string

Sample Input
bcabc
Sample Output
abc
*/

// #include <iostream> 
// #include <string>
// #include <vector>
// using namespace std;

// string stringCreator(vector<int> &ans) {
//     string result = "";
//     for (int i = 0; i < 26; ++i) {
//         if (ans[i] > 0){
//         result += (char)(i + 'a');
//         }
//     }
//     return result;
// }

// string finder(string s, int n, vector<int> &ans) {
//     if (n == 0) {
//         return stringCreator(ans);
//     }
    
//     ans[s[n - 1] - 'a'] = 1;  
//     return finder(s, n - 1, ans);
// }

// int main() {
//     string s;
//     cin >> s;
//     vector<int> ans(26, 0);
//     int n = s.length();
//     if (s.empty()) {
//         cout << "" << endl;
//         return 0;
//     }
//     else cout << finder(s, n, ans) << endl;
    
//     return 0;
// }

// Code Submitted
#include <bits/stdc++.h>
using namespace std;

string removeDuplicateLetters(string s) {
    if (s.empty()) return "";

    vector<int> freq(26, 0);
    for (char c : s) freq[c - 'a']++;

    char minChar = 'z' + 1;
    int pos = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] < minChar) {
            minChar = s[i];
            pos = i;
        }
        if (--freq[s[i] - 'a'] == 0) break;
    }

    string remaining = "";
    for (int i = pos + 1; i < s.length(); i++) {
        if (s[i] != minChar) remaining += s[i];
    }

    return minChar + removeDuplicateLetters(remaining);
}

int main() {
    string s;
    cin >> s;
    cout << removeDuplicateLetters(s) << endl;
    return 0;
}

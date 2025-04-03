#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    void backtrack(const string& digits, int index, const vector<string>& mappings, string& current, vector<string>& result) {
        if (index == digits.size()) {
            if (!current.empty()) {
                result.push_back(current);
            }
            return;
        }
        
        int digit = digits[index] - '2';
        for (char c : mappings[digit]) {
            current.push_back(c);
            backtrack(digits, index + 1, mappings, current, result);
            current.pop_back();
        }
    }
    
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
        
        vector<string> mappings = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        vector<string> result;
        string current;
        backtrack(digits, 0, mappings, current, result);
        return result;
    }
};
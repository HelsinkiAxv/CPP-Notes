#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[5] = {1,2,3,4,5};
    
    int ans = arr[0];
    int left[5];
    left[0] = 1;
    
    for (int i = 1; i < 5; ++i) {
        left[i] = ans;
        ans *= arr[i];
    }

    int right[5];
    right[4] = 1;
    ans = arr[4];

    for (int i = 3; i >= 0; --i) {
        right[i] = ans;
        ans *= arr[i];
    }

    int res[5];
    for (int i = 0; i < 5; ++i) {
        res[i] = left[i] * right[i];
        cout << res[i] << " ";
    }
}

// LeetCode

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n, 1);
        
        int prefix = 1;
        for (int i = 0; i < n; ++i) {
            res[i] = prefix;
            prefix *= nums[i];
        }
        
        int suffix = 1;
        for (int i = n - 1; i >= 0; --i) {
            res[i] *= suffix;
            suffix *= nums[i];
        }
        
        return res;
    }
};

#include <iostream>
using namespace std;

int main () {
    int arr[] = {3,2,1,4,0,1,3,2};
    int n = sizeof(arr) / sizeof(int);

    int left[n];
    int right[n];
    left[0] = arr[0];
    right[n - 1] = arr[n - 1];

    for (int i = 1; i < n; ++i) {
        left[i] = max(left[i - 1] , arr[i]);
        cout << left[i] << " ";
    }
    cout << endl;

    for (int i = n - 2; i >= 0; --i) {
        right[i] = max(right[i + 1] , arr[i]);
        cout << right[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n; ++i) {
        cout << min(left[i] , right[i]) - arr[i] << " ";
    }
    return 0;
}


// Leetcode

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n == 0) return 0;

        int resArr[20005];
        resArr[0] = height[0];
        int max0 = height[0];

        for (int i = 1; i < n; ++i) {
            max0 = max(max0, height[i]);
            resArr[i] = max0;
        }

        max0 = height[n - 1];
        resArr[n - 1] = min(resArr[n - 1], max0);
        for (int i = n - 2; i >= 0; --i) {
            max0 = max(max0, height[i]);
            resArr[i] = min(resArr[i], max0);
        }

        int ans = 0;
        for (int i = 0; i < n; ++i) {
            ans += resArr[i] - height[i];
        }

        return ans;
    }
};

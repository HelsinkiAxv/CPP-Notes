#include <iostream>
#include <vector>
using namespace std;

int firstIndex(int *a, int n) {
    if (n == 0) return -1;
    if (a[0] == 7) return 0;
    
    int idx = firstIndex(a + 1, n - 1);
    if (idx == -1) return -1;
    
    return idx + 1;
}



void allIndexHelper(int *a, int n, int target, int index, vector<int> &indices) {
    if (n == 0) return;
    
    if (a[0] == target) indices.push_back(index);
    
    allIndexHelper(a + 1, n - 1, target, index + 1, indices);
}

vector<int> allIndex(int *a, int n, int target) {
    vector<int> indices;
    allIndexHelper(a, n, target, 0, indices);
    return indices;
}

int main() {
    int a[] = {1, 7, 4, 2, 7, 7, 3};
    int n = sizeof(a) / sizeof(int);
    int target = 7;

    cout << "First Index: " << firstIndex(a, n) << endl;

    vector<int> indices = allIndex(a, n, target);
    cout << "All Indices: ";
    for (int idx : indices) {
        cout << idx << " ";
    }
    cout << endl;

    return 0;
}

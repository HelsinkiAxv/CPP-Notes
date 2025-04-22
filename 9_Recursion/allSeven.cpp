#include <iostream>
#include <vector>
using namespace std;

// void allIndexHelper(int *a, int n, int target, int index, vector<int> &indices) {
//     if (n == 0) return;
    
//     if (a[0] == target) indices.push_back(index);
    
//     allIndexHelper(a + 1, n - 1, target, index + 1, indices);
// }

// vector<int> allIndex(int *a, int n, int target) {
//     vector<int> indices;
//     allIndexHelper(a, n, target, 0, indices);
//     return indices;
// }

// int main() {
//     int a[] = {1, 7, 4, 2, 7, 7, 3};
//     int n = sizeof(a) / sizeof(int);
//     int target = 7;

//     vector<int> indices = allIndex(a, n, target);
//     cout << "All Indices: ";
//     for (int idx : indices) {
//         cout << idx << " ";
//     }
//     cout << endl;

//     return 0;
// }












































void printAll7 (int *a, int i, int n) {

    if (i == n) {
        return;
    }

    if (a[i] == 7) cout << i << " ";

    printAll7(a, i + 1, n);

}

int main() {

    int a[] = {2,3,7,6,5,7,9,7};
    int n = sizeof(a) / sizeof(int);
    printAll7(a,0,n);

    return 0;
}
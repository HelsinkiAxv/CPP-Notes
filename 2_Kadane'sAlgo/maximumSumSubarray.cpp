// How to find maximum sum subarray
// Brute Force Approach to Start with in Interview
// How to find all Subarrays
// first write all
// 1                          0,0
// 1 2                        0,1
// 1 2 3                      0,2
// 1 2 3 4                    0,3
// 2                          1,1
// 2 3                        1,2
// 2 3 4                      1,3
// 3                          2,2
// 3 4                        2,3
// 4                          3,3

#include <iostream>
#include <climits>
using namespace std;

// print maximum subarray sum
// int main(){
//     int a[] = {1, 2, 3, 4};
//     int n = sizeof(a)/sizeof(int);
//     int sum;
//     int ans = INT_MIN;

//     for(int i = 0; i < n; ++i){
//         for(int j = i; j < n; ++j){
//             sum = 0;
//             for(int k = i; k <= j; ++k){
//                 sum += a[k];
//             }
//             ans = max(ans,sum);
//         }
//     }
//     cout<< ans << endl;
// }




// do the same function using 2loops
// also get the index values

// int main(){
//     int a[] = {1,2,3,4};
//     int n = sizeof(a)/sizeof(int);
//     int sum;
//     int ans = INT_MIN;

//     for(int i = 0; i < n; i++){
//         sum = 0;
//         sum += a[i];
//         for(int j = i+1; j < n; j++){
//             sum += a[j];
//         }
//         ans = max(sum,ans);
//     }
//     cout<< ans << endl;
// }



// 1 2 -5 3 8 -2 6
// Subarray Contiguous part of an array
// 3 + 8 = 11    6 + 3 = 12


// Prefix Sum Concept
// arr = 1,2,3,4
// ans = 1,3,6,10



// Work on this Part




int main(){
    int sum = 0;
    int ans = INT_MIN;
    int ps[] = {1,2,-5,3,8,-2,6};
    int n = sizeof(ps)/sizeof(int);
    for(int i = 0; i < n; ++i){
        for(int j = i; j < n; ++j){
            if(i - 1 >= 0){
                sum = ps[j] - ps[i - 1];
            }
            else{
                sum = ps[j];
            }
            ans = max(ans,sum);
        }
        cout<< sum << " ";
    }
    cout<< endl << ans <<endl;
}





// Kadanes Algo
// 1 2 -4 3 -8 2 6 -3 10
// when sum becomes negative make it 0;
// will not work when all elements become negative

// bool isPositivePresent = false;
// for(int i = 0; i < n; ++i){
//     if(a[i] >= 0){
//         isPositivePresent = true;
//     }

//     ans = max(ans, a[i]);
// }

// if(isPositivePresent == true){
//     for(int = 0; i < n; ++i){
//         sum += a[i];
//         if(sum < 0) sum = 0;

//         ans = max(ans, sum);
//     }
// }
// cout<<ans<<endl;

// Maximum Sum in a Circular Array
// int arr[] = {1,4,-8,2,6,-12,5,3};
// int arr[]
// bool isPositivePresent = false;
// for(int i = 0; i < n; ++i){
//     if(a[i] >= 0){
//         isPositivePresent = true;
//     }

//     ans = max(ans, a[i]);
// }

// if(isPositivePresent == true){
//     for(int = 0; i < n; ++i){
//         sum += a[i];
//         if(sum < 0) sum = 0;

//         ans = max(ans, sum);
//     }
// }
// cout<<ans<<endl;

// store subarrays sum differently using max sum algo
// how to remove side circular
// circular array

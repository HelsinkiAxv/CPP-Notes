#include <iostream>
using namespace std;

int binarySearch(){
    int s = 0, e = n - 1;

    while ( s <= e ){
        int mid = (s + e)/2;

        if( a[mid] == key) return mid;
        else if
    }
    
}


int main(){
    int a[] = {1,2,3,4,5};
    int n = sizeof(a)/sizeof(int);

    cout << binarySearch(a,n,15) << endl;

    return 0;
}
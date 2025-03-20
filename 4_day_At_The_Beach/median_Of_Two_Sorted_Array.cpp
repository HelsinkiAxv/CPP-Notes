#include <iostream>
#include <climits>
using namespace std;

double median( int *a, int *b, int n, int m){

    if( n > m ) return median(b,a);

    int s = 0 , e = n -1;

    while ( s <= e ) {
        int mid = ( s + e ) / 2;
        int mid1 = (n+m+1)/2-mid-2;

        int leftMaxa = a[mid];
        int leftMaxb = b[mid1];
        int rightMinA = (mid+1<n) ? a[mid + 1] : INT_MAX;
        int rightMinb = (mid1+1<n) ? b[mid1+1] : INT_MAX;

        if(leftMaxa<rightMinb and leftMaxb < rightMinA){
            if ((n+m)%2 == 1) return max(leftMaxa,leftMaxb);
            else return(max(leftMaxa,leftMaxb) + max(rightMinA,rightMinb)) / 2.0;
        }
        else if (leftMaxa > rightMinb) e = mid - 1;
        else s = mid + 1;
    }
    return 0;
}

int main() {
    int a[] = {1,4,7,9,11};
    int b[] = {2,3,5,6,8,10};

    int n = sizeof(a) / sizeof(int);
    int m = sizeof(b) / sizeof(int);

    cout<< median(a,b,n,m) << endl;
}
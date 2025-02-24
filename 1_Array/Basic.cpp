#include <iostream>
using namespace std;

int main(){
    int a[5] = {1,2,3,4,5};
    int n = sizeof(a)/sizeof(int);

    cout << n << endl;

    for (int i = 0; i<n; i++){
        cout << a[i] <<" ";
    }
    cout << endl;
    int x = 4;
    int i;
    for(i = 0; i < n; i++){
        if(x == a[i]){
            cout<<"True"<<endl;
            break;
        }
    }
    if(i == n){
        cout << "False" << endl;
    }

    cout << endl;
    return 0;
}
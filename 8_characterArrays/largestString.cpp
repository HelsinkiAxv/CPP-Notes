#include <iostream>
#include <string>
using namespace std;

int main() {
    string line, largest;
    
    cout << "Enter multiple lines: \n";
    // cin.get();
    // cin.ignore();
    while (getline(cin, line)) { 
        if (line.length() > largest.length()) {
            largest = line; 
        }
    }

    cout << "\nLargest string: " << largest <<endl;
    return 0;
}

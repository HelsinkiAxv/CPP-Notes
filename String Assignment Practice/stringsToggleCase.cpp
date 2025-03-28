#include <iostream>
#include <string>
using namespace std;

string toggleCase(const string &S) {
    string toggled = S;
    for (char &c : toggled) {
        if (isupper(c)) {
            c = tolower(c);
        } else if (islower(c)) {
            c = toupper(c);
        }
    }
    return toggled;
}

int main() {
    string S;
    cin >> S;
    cout << toggleCase(S) << endl;
    return 0;
}

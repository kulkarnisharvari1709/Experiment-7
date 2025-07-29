#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, reversed = "";
    cout << "Enter a string: ";
    cin >> str;

    for (int i = str.length() - 1; i >= 0; i--) {
        reversed += str[i];
    }

    if (str == reversed)
        cout << "The string is a Palindrome." << endl;
    else
        cout << "The string is not a Palindrome." << endl;

    return 0;
}

#include <iostream>
using namespace std;


int main() {
    char lowercaseLetter, uppercaseLetter;
    int offset;

    cout << "Please enter a lowercase letter:" << endl;
    cin >> lowercaseLetter;

    // subtract the ascii value of 'a' from lowercaseLetter
    // 116 - 97 = 19
    offset = (int)(lowercaseLetter - 'a');

    // 19 is how much it takes from A to the letter we are trying to convert
    // add the difference(19) with 'A' and that is equal to the uppercaseLetter
    uppercaseLetter = (char)('A' + offset);

    cout << "The uppercase of " << lowercaseLetter << " is " << uppercaseLetter << endl;

    return 0;
}
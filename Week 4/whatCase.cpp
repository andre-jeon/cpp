#include <iostream>
using namespace std;

int main() {
    char userCh;

    cout << "Please enter a character:" << endl;
    cin >> userCh;

    // interesting how 'a' or 'A' has a greater or less than values
    // almost as if they are automatically converted into its ASCII values
    if(userCh >= 'a' && userCh <= 'z') // checking to see if it's lowercase
        cout << userCh << " is a lowercase letter." << endl;

    else if(userCh >= 'A' && userCh <= 'Z') // checking to see if it's uppercase
        cout << userCh << " is an uppercase letter." << endl;

    // integer 0 and character '0' has two different values
    else if(userCh >= '0' && userCh <= '9') // checking to see if it's a digit, 0 <= userCh =< 9
        cout << userCh << " is a digit." << endl;

    else // nothing
        cout << userCh << " is not alpha-numberic character." << endl;

    return 0;
}
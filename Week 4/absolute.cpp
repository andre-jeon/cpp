#include <iostream>
using namespace std;

int main() {
    int userInput;

    cout << "Please enter an integer:" << endl;
    cin >> userInput;

    if (userInput < 0)
        userInput *= (-1);
    
    cout << userInput << endl;

    return 0;
}
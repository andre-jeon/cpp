/* 

Write a program that reads a positive integer n, and prints the numbers from 1 up to n 

Example:
Please enter a positive integer: 4

1
2
3
4

*/

#include <iostream>
using namespace std;

int main() {
    int n;
    int counter;

    // when the program runs, this message shows up
    cout << "Please enter a positive integer:";

    // user input n
    cin >> n;

    // initial counter value
    counter = 1;

    // while counter is less than or equal to n
    // the while loop is executed as long as the value of counter is n or less
    while(counter <= n) {

        // printing the value of counter
        cout << counter << endl;

        // then incrementing counter by 1
        counter++;
    }

    return 0;
}
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


    // for loop has all 3 processes combined together compared to while loop
    // more readable than the while loop
    for(counter = 1; counter  <= n; counter++) {
        // cout prints the value
        cout << counter << endl;
    }

    return 0;
}
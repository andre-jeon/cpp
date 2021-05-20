// This program reads two integers from the user and prints their sum

// each program will start with these two lines
#include <iostream>
using namespace std;

int main() {
    
    // in c++ we have state the data types
    int num1;   // will hold the first input/value
    int num2;   // will hold the second input/value
    int sum;    // will hold the sum

    cout << "Please enter two numbers separated by a space:" << endl;

    cin >> num1 >> num2;

    sum = num1 + num2;

    cout << num1 << " + " << num2 << " = " << sum << endl;

    return 0;   // return 0 is a common thing with programs
}

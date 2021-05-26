/*
Problem:
Write a program that reads a positive integer num, and prints the number of digits in num and their sum.

Example:
Please enter a positive integer: 375

375 has 3 digits and their sum is 15
*/

#include <iostream>
using namespace std;

int main() {
    int num, currDigit, countDigits, sumDigits;

    cout << "Please enter a positive integer:";
    cin >> num;

    sumDigits = 0;
    countDigits = 0;

    while(num > 0) {
        currDigit = num%10;
        countDigits++;
        sumDigits += currDigit;
        num = num / 10;
    }
    
    cout << num << " has " << countDigits << " Digits";
    cout << " and their sum is " << sumDigits << endl;

    return 0;
}
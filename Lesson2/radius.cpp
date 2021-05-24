/*Let C be a circle with a radius of length r
We have: (Area of C) = PI * r^2*/

#include <iostream>
using namespace std;

const double PI = 3.14;

int main() {
    double radius, area;

    cout << "Please enter the radius:" << endl;
    cin >> radius;

    area = PI * (radius * radius);

    cout << "The area of a circle with radius of " << radius << " is " << area << "cm." << endl;

    return 0;
}
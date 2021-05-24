/*Let C be a circle with a radius of length r
We have: (Area of C) = PI * r^2*/

#include <iostream> // extension that allows us to use cin and cout
#include <cmath> // extension that allows us to use built in Pi value 
using namespace std;


// Give it a constant value for PI
// const double PI = 3.14; M_PI is much more accurate representation of Pi

int main() {
    double radius, area;

    cout << "Please enter the radius:" << endl;
    cin >> radius;

    area = M_PI * (radius * radius);

    cout << "The area of a circle with radius of " << radius << " is " << area << endl;

    return 0;
}
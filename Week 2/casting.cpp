// casting -  converting the representation of one type to the equivalant of another type 
// int -> double/float
#include <iostream> // extension that allows us to use cin and cout

int main() {
    int x1, x2;
    double y1, y2;

    x1 = 6;
    y1 = 6.7;

    y2 = (double)6;
    x2 = (int)6.7;

    return 0;
}

int main() {
    int x;
    double y;

    cout << 5 / 2 << endl;
    cout << 5.0 / 2.0 << endl;
    cout << 5.0 / 2 << endl;

    x = 5/2;
    y = 5/2;

    return 0;
}


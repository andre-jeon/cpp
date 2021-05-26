#include <iostream>
using namespace std;

int main() {
    int numOfStudents;
    int count;
    int curr, sum;
    double average;

    cout << "Please enter the number of students in class" << endl;
    cin >> numOfStudents;

    cout << "Enter the students' grades (separate by a space)" << endl;

    for (count = 1; count <= numOfStudents; count++) {
        cin >> curr;
        sum += curr;
    }

    average = (double)sum / (double)numOfStudents;

    cout << "The average is " << average << endl;
    
    return 0;
}
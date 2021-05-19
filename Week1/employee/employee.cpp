#include <iostream>
using std::string;

// adding attributes
// all of the attributes are private by default
// all of these members here are private

// private: whatever is private will be hidden
// public: you will be able to access it outside of the class 
// protected: in-between private and public

class Employee {
// private:
// protected:
public:
    string Name;
    string Company;
    int Age;

    // creating a introducing function
    void IntroduceYourself() {
        std::cout << "Name - " << Name << std::endl;
        std::cout << "Company - " << Company << std::endl;
        std::cout << "Age - " << Age << std::endl;
    }
};

// creating the variable type
int main() {

    // class   object
    Employee employee1;

    employee1.Name = "Andre";
    employee1.Company = "Néo-Manhattan";
    employee1.Age = 25;

    // invoking the introducing function
    employee1.IntroduceYourself();

    Employee employee2;
    employee2.Name = "Nam";
    employee2.Company = "Néo-Manhattan";
    employee2.Age = 24;

    employee2.IntroduceYourself();

    // contructor: a contructor is a special type of method when invoked everytime an object of a class is created
}
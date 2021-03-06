#include <iostream>
using std::string;

// adding attributes
// all of the attributes are private by default
// all of these members here are private

// private: whatever is private will be hidden
// public: you will be able to access it outside of the class 
// protected: in-between private and public

// abtract class
class AbstractEmployee {
    virtual void AskForPromotion() = 0;
};

class Employee:AbstractEmployee {

private:
// protected:
// public:
    string Company;
    int Age;

protected:
    string Name;


public:
    void setName(string name) {
        Name = name;
    }
    string getName() {
        return Name;
    }
    void setCompany(string company) {
        Company = company;
    }
    string getCompany() {
        return Company;
    }
    void setAge(int age) {
        // validation check
        if(age >= 18)
        Age = age;
    }
    int getAge() {
        return Age;
    }

    // creating a introducing function
    void IntroduceYourself() {
        std::cout << "Name - " << Name << std::endl;
        std::cout << "Company - " << Company << std::endl;
        std::cout << "Age - " << Age << std::endl;
    }
    
    // creating a contructor function

    // contructor: a contructor is a special type of method when invoked everytime an object of a class is created
    // default contructor: a contructor automatically generated by the complier

    // contructor rules:
    // the contructor does not have a return type 
    // the contructor must be public
    // the contructor matches the class name

    
    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    }
    
    void AskForPromotion() {
        if (Age > 30)
            std::cout << Name << " got promoted!" << std::endl;
        else
            std::cout << Name << ", sorry NO promotion for you!" << std::endl;
    }

    void Work() {
        std::cout << Name << " is checking email, task backlog, performing tasks..." << std::endl;
    }
};


// Developer has all the Employee properties
class Developer: Employee {
public:
    string FavProgrammingLanguage;

    // implementing constructor for Teacher
    Developer(string name, string company, int age, string favProgrammingLanguage):Employee(name, company, age) {
        FavProgrammingLanguage = favProgrammingLanguage;
    }
    // method
    void FixBug() {
        std::cout << Name << " fixed bug using " << FavProgrammingLanguage << std::endl;
    }
};

class Teacher:public Employee {
public:
    string Subject;

    // implementing constructor for Teacher
    Teacher(string name, string company, int age, string subject):Employee(name, company, age) {
        Subject = subject;
    }

    void PrepareLesson() {
        std::cout << Name << " is preparing " << Subject << " lesson." << std::endl;
    }
};

// creating the variable type
int main() {

    // class   object
    // invoking the constructor fucntion Employee
    Employee employee1 = Employee("Andre", "N??o-Manhattan", 25);

    // invoking the introducing function
    // employee1.IntroduceYourself();

    Employee employee2 = Employee("Nam", "N??o-Manhattan", 35);

    // employee2.IntroduceYourself();

    Developer d = Developer("Andre 2.0", "Spotify", 25, "C++");

    Teacher t = Teacher("CUNT", "AMAZON", 25, "MAF");

    // employee1.setAge(15);
    // std::cout << employee1.getName() << " is " << employee1.getAge() << " years old.";
    employee1.AskForPromotion();
    employee2.AskForPromotion();

    d.FixBug();

    t.PrepareLesson();
    t.AskForPromotion();

    t.Work();

}

#include <iostream>
using namespace std;

// Base class
class Employee {
public:
    void showDetails() {
        cout << "I am an employee." << endl;
    }
};

// Another base class
class Person {
public:
    void showPersonality() {
        cout << "I am a person." << endl;
    }
};

// Derived class from Employee
class Manager : public Employee {
public:
    void manage() {
        cout << "I manage the team." << endl;
    }
};

// Derived class from both Employee and Person
class Developer : public Employee, public Person {
public:
    void code() {
        cout << "I write code." << endl;
    }
};

int main() {
    Manager manager;
    Developer developer;

    manager.showDetails();  // Inherited from Employee
    manager.manage();       // Manager-specific function

    developer.showDetails();    // Inherited from Employee
    developer.showPersonality(); // Inherited from Person
    developer.code();            // Developer-specific function

    return 0;
}

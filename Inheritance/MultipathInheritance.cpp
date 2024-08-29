#include <iostream>
using namespace std;

// defination of multipath inheritance
// Multipath inheritance is a scenario in C++ where a derived class inherits from two or more classes 
// that share a common base class, leading to ambiguity if not managed correctly.
//  To handle this, the virtual inheritance mechanism is often used.

// Base class
class Employee {
public:
    void showDetails() {
        cout << "I am an employee." << endl;
    }
};

// Derived class from Employee
class Manager : virtual public Employee {
public:
    void manage() {
        cout << "I manage the team." << endl;
    }
};

// Another derived class from Employee
class Developer : virtual public Employee {
public:
    void code() {
        cout << "I write code." << endl;
    }
};

// Derived class from both Manager and Developer
class TechLead : public Manager, public Developer {
public:
    void lead() {
        cout << "I lead the technical team." << endl;
    }
};

int main() {
    TechLead techLead;

    techLead.showDetails();  // Accessing the common base class function
    techLead.manage();       // Manager-specific function
    techLead.code();         // Developer-specific function
    techLead.lead();         // TechLead-specific function

    return 0;
}

#include <iostream>
using namespace std;

// Base class
class Employee {
public:
    void showDetails() {
        cout << "I am an employee." << endl;
    }
};

// Derived class for Manager
class Manager : public Employee {
public:
    void manage() {
        cout << "I manage the team." << endl;
    }
};

// Derived class for Developer
class Developer : public Employee {
public:
    void code() {
        cout << "I write code." << endl;
    }
};

// Derived class for Intern
class Intern : public Employee {
public:
    void learn() {
        cout << "I am learning." << endl;
    }
};

int main() {
    Manager manager;
    Developer developer;
    Intern intern;

    manager.showDetails();
    manager.manage();

    developer.showDetails();
    developer.code();

    intern.showDetails();
    intern.learn();

    return 0;
}

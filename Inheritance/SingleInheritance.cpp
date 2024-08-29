#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "I can eat!" << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void bark() {
        cout << "I can bark!" << endl;
    }
};

int main() {
    Dog myDog;
    myDog.eat();   // Calling the inherited function
    myDog.bark();  // Calling the derived class function
    return 0;
}

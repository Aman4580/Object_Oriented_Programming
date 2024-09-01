#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "I can eat!" << endl;
    }
};

// Derived class from Animal
class Dog : public Animal {
public:
    void bark() {
        cout << "I can bark!" << endl;
    }
};


// Derived class from Dog
class Puppy : public Dog {
public:
    void weep() {
        cout << "I can weep!" << endl;
    }
};

int main() {
    Puppy myPuppy;
    myPuppy.eat();   // Calling the inherited function from Animal
    myPuppy.bark();  // Calling the inherited function from Dog
    myPuppy.weep();  // Calling the Puppy class function
    return 0;
}

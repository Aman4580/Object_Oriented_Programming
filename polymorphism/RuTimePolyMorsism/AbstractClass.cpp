#include <iostream>
using namespace std;

// Pure abstract class
class Animal {
public:
    // Pure virtual function
    virtual void makeSound() const = 0;

    // Pure virtual function for movement
    virtual void move() const = 0;

    // Virtual destructor (good practice)
    virtual ~Animal() {}
};

class Dog : public Animal {
public:
    void makeSound() const override {
        cout << "Woof!" << endl;
    }

    void move() const override {
        cout << "The dog runs." << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() const override {
        cout << "Meow!" << endl;
    }

    void move() const override {
        cout << "The cat jumps." << endl;
    }
};

int main() {
    // Animal a;  // Error: Cannot instantiate abstract class

    Animal* myDog = new Dog();
    Animal* myCat = new Cat();

    myDog->makeSound();  // Outputs: Woof!
    myDog->move();       // Outputs: The dog runs.

    myCat->makeSound();  // Outputs: Meow!
    myCat->move();       // Outputs: The cat jumps.

    delete myDog;
    delete myCat;

    return 0;
}

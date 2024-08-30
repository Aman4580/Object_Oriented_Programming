#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {  // Virtual function
        cout << "Base class show function" << endl;
    }
};

class Derived : public Base {
public:
    void show(){
        cout << "Derived class show function" << endl;
    }
};

int main() {
    Base* bptr;
    bptr = new Derived();
    bptr->show();
    return 0;
}

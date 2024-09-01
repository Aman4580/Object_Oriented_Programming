#include <iostream>
using namespace std;
// function overloading
class Math {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {// function overloading
        return a + b;
    }
};

int main() {
    Math math;
    cout << "Sum of integers: " << math.add(2, 3) << endl;
    cout << "Sum of doubles: " << math.add(2.5, 3.5) << endl;
    return 0;
}

#include <iostream>
using namespace std;

class Calculator {
public:
    // Public methods that provide a simple interface for arithmetic operations

    int add(int a, int b) {
        return a + b;
    }

    int subtract(int a, int b) {
        return a - b;
    }

    int multiply(int a, int b) {
        return a * b;
    }

    double divide(int a, int b) {
        if (b != 0) {
            return static_cast<double>(a) / b;
        } else {
            cout << "Error: Division by zero is not allowed." << endl;
            return 0.0;
        }
    }
};

int main() {
    // Create a Calculator object
    Calculator calc;

    // Use the Calculator object to perform arithmetic operations
    int x = 10, y = 5;

    cout << "Addition: " << calc.add(x, y) << endl;
    cout << "Subtraction: " << calc.subtract(x, y) << endl;
    cout << "Multiplication: " << calc.multiply(x, y) << endl;
    cout << "Division: " << calc.divide(x, y) << endl;

    return 0;
}

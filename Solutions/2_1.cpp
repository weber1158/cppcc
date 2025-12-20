#include <cstdio>

// Exercise 2-1
enum class Operation {
    Add,
    Subtract,
    Multiply,
    Divide
};

// Exercise 2-2
struct Calculator {
    // Initialize input
    Operation op;

    // Constructor
    Calculator(Operation o) {
        op = o;
    }

    // Method (Exercise 2-3)
    double calculate(double a, double b) {
        switch (op) {
            case Operation::Add: {
                return a + b;
             } break;
            case Operation::Subtract: {
                return a - b;
            } break;
            case Operation::Multiply: {
                return a * b;
            } break;
            case Operation::Divide:   {
                return a / b;
            } break;
            default:
                printf("Error: Unknown operator!");
                return 0;
        }
    }
};

// Exercise 2-4
int main() {

    Calculator plus(Operation::Add);            // One way to initialize
    printf("1+2 = %g\n", plus.calculate(1, 2));

    Calculator minus{Operation::Subtract};      // 2nd way to initialize
    printf("3-1 = %g\n", minus.calculate(3,1));

    Calculator times = Operation::Multiply;     // 3rd way to initialize
    printf("6*4 = %g\n", times.calculate(6,4));

    Calculator quotient = {Operation::Divide};  // 4th way to initialize
    printf("10/3 = %0.4f\n", quotient.calculate(10,3));

    // This line proves that the code still executes even when
    // you divide by zero. Interestingly, the output is `inf`
    // rather than `undefined`.
    printf("8/0 = %0.4f\n", quotient.calculate(8,0));
    
}
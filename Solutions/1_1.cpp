#include <cstdio>

// Exercise 1-1
int absolute_value(int value) {
    int abs_val = 0;
    if (value < 0) {
        abs_val = value * -1;
    } else {
        abs_val = value;
    }
    return abs_val;
}

// Exercise 1-4
int sum(int n1, int n2) {
    int nSum = 0;
    nSum = n1 + n2;
    return nSum;
}

int main() {
    // Example values
    int num1 = 35;
    int num2 = 0;
    int num3 = -6;

    // Print the absolute values
    printf("Num1: %d, Absolute Value: %d\n", num1, absolute_value(num1));
    printf("Num2: %d, Absolute Value: %d\n", num2, absolute_value(num2));
    printf("Num3: %d, Absolute Value: %d\n", num3, absolute_value(num3));
    printf("The absolute value of Num1 + Num2 is %d", absolute_value(sum(num1,num3)));
}
#include <stdio.h>

// Function prototypes
int add(int x, int y);
int subtract(int x, int y);
int multiply(int x, int y);
int divide(int x, int y);
int modulo(int x, int y);

int main() {
    int a = 5, b = 3;

    int sum = add(a, b);
    int difference = subtract(a, b);
    int product = multiply(a, b);
    int quotient = divide(a, b);
    int remainder = modulo(a, b);

    printf("a = %d, b = %d\n", a, b);
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);

    return 0;
}

// Function definitions
int add(int x, int y) {
    return x + y;
}

int subtract(int x, int y) {
    return x - y;
}

int multiply(int x, int y) {
    return x * y;
}

int divide(int x, int y) {
    return x / y;
}

int modulo(int x, int y) {
    return x % y;
}

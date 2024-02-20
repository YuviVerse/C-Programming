#include <stdio.h>

int main() {
    int a = 5, b = 3;

    // Arithmetic Operators
    printf("a + b = %d\n", a + b); // Addition
    printf("a - b = %d\n", a - b); // Subtraction
    printf("a * b = %d\n", a * b); // Multiplication
    printf("a / b = %d\n", a / b); // Division
    printf("a %% b = %d\n", a % b); // Modulus (remainder of a/b)

    // Relational Operators
    printf("a == b: %d\n", a == b); // Equal to
    printf("a != b: %d\n", a != b); // Not equal to
    printf("a > b: %d\n", a > b);   // Greater than
    printf("a < b: %d\n", a < b);   // Less than
    printf("a >= b: %d\n", a >= b); // Greater than or equal to
    printf("a <= b: %d\n", a <= b); // Less than or equal to

    // Logical Operators
    printf("(a > b) && (a != 0): %d\n", (a > b) && (a != 0)); // Logical AND
    printf("(a < b) || (b != 0): %d\n", (a < b) || (b != 0)); // Logical OR
    printf("!(a == b): %d\n", !(a == b)); // Logical NOT

    return 0;
}
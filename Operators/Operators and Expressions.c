#include <stdio.h>

int main() {
    int a = 5, b = 3;

    // Arithmetic Operators
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);

    // Relational Operators
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);

    // Logical Operators
    printf("(a > b) && (a != 0): %d\n", (a > b) && (a != 0));
    printf("(a < b) || (b != 0): %d\n", (a < b) || (b != 0));
    printf("!(a == b): %d\n", !(a == b));

    return 0;
}
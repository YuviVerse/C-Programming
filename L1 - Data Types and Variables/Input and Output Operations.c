#include <stdio.h>

int main() {
    int integerInput;
    float floatInput;

    printf("Enter an integer: ");
    scanf("%d", &integerInput);
    printf("Enter a float: ");
    scanf("%f", &floatInput);

    printf("You entered integer: %d\n", integerInput);
    printf("You entered float: %f\n", floatInput);

    return 0;
}
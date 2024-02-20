// Exercise 3: Prompt the user to enter a non-negative integer. Use a for loop to calculate the factorial of that number and display the result.
#include <stdio.h>

int main() {
    int n, factorial = 1;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        factorial *= i;
    }
    printf("Factorial of %d = %d\n", n, factorial);
    return 0;
}

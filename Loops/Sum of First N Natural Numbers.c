// Exercise 2: Ask the user to input a positive integer N. Then, write a program that calculates the sum of the first N natural numbers using a while loop.
#include <stdio.h>

int main() {
    int N, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &N);
    for(int i = 1; i <= N; i++) {
        sum += i;
    }
    printf("Sum of first %d natural numbers is: %d\n", N, sum);
    return 0;
}

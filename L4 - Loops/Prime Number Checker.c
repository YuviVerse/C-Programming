// Exercise 10: Prompt the user to enter a positive integer greater than 1. Write a program that uses a for loop to check whether the number is prime.
#include <stdio.h>

int main() {
    int n, i, flag = 0;
    printf("Enter a positive integer greater than 1: ");
    scanf("%d", &n);
    for(i = 2; i <= n / 2; i++) {
        if(n % i == 0) {
            flag = 1;
            break;
        }
    }
    if (n == 1) {
        printf("1 is neither prime nor composite.\n");
    } else {
        if (flag == 0)
            printf("%d is a prime number.\n", n);
        else
            printf("%d is not a prime number.\n", n);
    }
    return 0;
}
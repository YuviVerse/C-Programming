// Exercise 9: Ask the user to input a positive integer. Use a while loop to reverse the digits of the number and print the reversed number.
#include <stdio.h>

int main() {
    int n, reverse = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    while(n != 0) {
        reverse = reverse * 10;
        reverse = reverse + n % 10;
        n = n / 10;
    }
    printf("Reversed number: %d\n", reverse);
    return 0;
}
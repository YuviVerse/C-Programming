// Exercise 5: Ask the user to enter a positive integer N. Use a loop to print the multiplication table for N up to 10.
#include <stdio.h>

int main() {
    int N;
    printf("Enter a positive integer: ");
    scanf("%d", &N);
    for(int i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", N, i, N * i);
    }
    return 0;
}

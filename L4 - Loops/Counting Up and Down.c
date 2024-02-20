// Exercise 1: Write a program that uses a for loop to count up from 1 to 10, then uses another loop to count down from 10 to 1.
#include <stdio.h>

int main() {
    int i;
    // Counting up
    for(i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n");
    // Counting down
    for(i = 10; i >= 1; i--) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}

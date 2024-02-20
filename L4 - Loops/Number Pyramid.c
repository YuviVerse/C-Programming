// Exercise 6: Write a program that uses nested for loops to print a pyramid of numbers.
#include <stdio.h>

int main() {
    for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}

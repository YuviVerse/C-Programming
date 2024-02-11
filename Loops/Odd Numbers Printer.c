// Exercise 4: Write a program that prints all odd numbers between 1 and 100 using a for loop.
#include <stdio.h>

int main() {
    for(int i = 1; i <= 100; i += 2) {
        printf("%d\n", i);
    }
    return 0;
}

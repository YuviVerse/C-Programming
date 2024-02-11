// Exercise 8: Write a program that iterates from 1 to 100 using a for loop. Use the continue statement to skip any number divisible by 3 and the break statement to stop the loop if a number greater than 50 is reached.
#include <stdio.h>

int main() {
    for(int i = 1; i <= 100; i++) {
        if(i % 3 == 0) continue;
        if(i > 50) break;
        printf("%d\n", i);
    }
    return 0;
}
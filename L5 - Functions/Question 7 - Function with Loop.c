// Write a function that calculates the sum of all numbers from 1 to n (inclusive) and use it in main to print the sum for n = 10.
#include <stdio.h>

int sumToN(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int result = sumToN(10);
    printf("Sum of numbers from 1 to 10 is %d\n", result);
    return 0;
}

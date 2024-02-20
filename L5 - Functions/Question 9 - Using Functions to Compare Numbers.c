// Predict the output of the following code.
#include <stdio.h>

int max(int a, int b) {
    if (a > b) return a;
    else return b;
}

int main() {
    int greatest = max(10, 20);
    printf("The greater number is: %d\n", greatest);
    return 0;
}
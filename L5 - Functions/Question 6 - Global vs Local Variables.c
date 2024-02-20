// Q6: What is the output of this program?
#include <stdio.h>

int num = 20; // Global variable

void display() {
    int num = 10; // Local variable
    printf("%d\n", num);
}

int main() {
    display();
    printf("%d\n", num);
    return 0;
}

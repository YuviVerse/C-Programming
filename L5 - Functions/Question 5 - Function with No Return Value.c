// What does this program print?
#include <stdio.h>

void greet(char name[]) {
    printf("Hello, %s!\n", name);
}

int main() {
    greet("Alice");
    greet("Bob");
    return 0;
}

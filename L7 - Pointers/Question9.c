// What does the following code print?
#include <stdio.h>

int main() {
    int x = 10;
    int *ptr = &x;
    printf("%p", (void*)ptr);
    return 0;
}
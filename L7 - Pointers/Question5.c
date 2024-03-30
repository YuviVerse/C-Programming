// What does the following code print?
#include <stdio.h>

int main() {
    int x = 10;
    int *ptr = &x;
    int **pptr = &ptr;
    printf("%d", **pptr);
    return 0;
}
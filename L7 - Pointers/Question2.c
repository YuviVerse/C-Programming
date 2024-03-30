// What does the following code print?
#include <stdio.h>

int main() {
    int x = 5;
    int y = 6;
    int *ptr = &x;
    ptr = &y;
    printf("%d", *ptr);
    return 0;
}
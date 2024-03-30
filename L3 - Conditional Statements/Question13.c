#include <stdio.h>

int main() {
    int x = 10, y = 20;
    if (!(!x) && x) {
        printf("x is %d\n", x);
    } else {
        printf("y is %d\n", y);
    }
    return 0;
}
// What does the following code print?
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    printf("%d", *(ptr + 2));
    return 0;
}
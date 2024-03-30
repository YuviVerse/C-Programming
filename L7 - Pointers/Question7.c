// What does the following code print?
#include <stdio.h>

int main() {
    int arr[3] = {10, 20, 30};
    int *ptr = arr;
    printf("%d", ptr[1]);
    return 0;
}
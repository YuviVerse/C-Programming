// What does the following code print?
#include <stdio.h>

int main() {
    char *str = Hello World;
    printf("%c", *(str + 6));
    return 0;
}
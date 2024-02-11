// Exercise 7: Prompt the user to enter a positive integer between 1 and 10. Use a do-while loop to keep asking for the number if the input is outside the range.
#include <stdio.h>

int main() {
    int number;
    do {
        printf("Enter a positive integer between 1 and 10: ");
        scanf("%d", &number);
    } while(number < 1 || number > 10);
    printf("You entered: %d\n", number);
    return 0;
}
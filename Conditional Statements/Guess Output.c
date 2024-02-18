#include <stdio.h>

int main() {
    // Block 1
    // Problem: What is the output if x is less than 10 but not less than 5?
    int x = 7;
    printf("Block 1: ");
    if (x < 10) {
        if (x < 5) {
            printf("x is less than 5.\n");
        } else {
            printf("x is less than 10 but not less than 5.\n");
        }
    } else {
        printf("x is 10 or more.\n");
    }

    // Block 2
    // Problem: What is the output for different values of score (90, 75, 50)?
    int score = 75; // Try changing this to 90 or 50 and guess the output
    printf("Block 2: ");
    if (score >= 90) {
        printf("Grade A\n");
    } else if (score >= 80) {
        printf("Grade B\n");
    } else if (score >= 70) {
        printf("You passed\n");
    } else {
        printf("You failed\n");
    }

    // Block 3
    // Problem: Guess the output based on the value of a and b
    int a = 5, b = 5;
    printf("Block 3: ");
    if (a == b) printf("a equals b. ");
    if (a++ > b) printf("a is greater than b after increment. ");
    else printf("a is not greater than b after increment. ");

    // Block 4
    // Problem: What is the output when day is Wednesday?
    char *day = "Wednesday";
    printf("\nBlock 4: ");
    switch (day[0]) {
        case 'M':
            printf("Monday\n");
            break;
        case 'W':
            printf("Wednesday\n");
            break;
        case 'F':
            printf("Friday\n");
            break;
        default:
            printf("Not Monday, Wednesday, or Friday\n");
    }

    // Block 5
    // Problem: What is the output if var = 15?
    int var = 15;
    printf("Block 5: ");
    if (var > 10 && var < 20) {
        printf("var is between 10 and 20.\n");
    } else {
        printf("var is not between 10 and 20.\n");
    }

    // Block 6
    // Problem: What is the output for num = 2?
    int num = 2;
    printf("Block 6: ");
    if (num == 1) {
        printf("One ");
    } else if (num == 2) {
        printf("Two ");
    }
    if (num == 2) {
        printf("Also Two ");
    }
    if (num < 3) {
        printf("Less than Three\n");
    }

    return 0;
}

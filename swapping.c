
#include <stdio.h>

int main() {
    int number;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is between 1 and 100
    if (number >= 1 && number <= 100) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}
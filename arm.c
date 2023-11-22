#include <stdio.h>
int main() {
    int number;

    
    printf("Enter a number: ");
    scanf("%d", &number);

    
    if (Armstrong(number))
        printf("%d is an Armstrong number.\n", number);
    else
        printf("%d is not an Armstrong number.\n", number);

    return 0;
}

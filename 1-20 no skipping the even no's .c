#include <stdio.h>

int main() {
int i;

printf("Numbers from 1 to 20 excluding even numbers:\n");

for(i = 1; i <= 20; i++) {
    // Skip even numbers
    if(i % 2 == 0) {
        continue;
    }
    printf("%d ", i);
}

printf("\n");
return 0;
}
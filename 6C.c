// Program to find an element in an array using linear search

#include<stdio.h>
int main() {
    int arr[30], ele, i, found = 0, num;
    printf("Enter the size of an array : ");
    scanf("%d", &num);

    for(i = 0; i < num; i++) {
        printf("Enter the element arr[%d] : ", i);
        scanf("%d", &arr[i]);
    }
    printf("\n Enter the element to search : ");
    scanf("%d", &ele);
    
    for(i = 0; i < num; i++) {
        if(arr[i] == ele){
            printf("Element found at the index %d = %d\n", i, ele);
            found = 1;
            break;
        }
    }
    if(!found)
    printf("Element not found.\n");

    return 0;
}

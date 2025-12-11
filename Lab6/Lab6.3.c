#include <stdio.h>
#define ARRAY_SIZE 3

int main() {
    int numbers[ARRAY_SIZE];
    int *arrayPtr;
    int index;

    printf("Enter %d integer elements for the array:\n", ARRAY_SIZE);
    for (index = 0; index < ARRAY_SIZE; index++) {
        printf("Element %d: ", index);
        scanf("%d", &numbers[index]);
    }

    printf("\n--- ARRAY AND POINTER REPORT ---\n");
    printf("Index | Value (Direct) | Value (via pointer) | Address\n");
    printf("------------------------------------------------------\n");

    arrayPtr = numbers;

    for (index = 0; index < ARRAY_SIZE; index++) {
        printf("%5d | %14d | %19d | 0x%llX\n", 
               index, 
               numbers[index], 
               *(arrayPtr + index), 
               (unsigned long long)(arrayPtr + index));
    }

    return 0;
}

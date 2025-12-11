#include <stdio.h>
#define ARRAY_SIZE 5

int findAndUpdate(int *arrayPtr, int length, int targetValue, int replacementValue) {
    int isUpdated = 0;
    
    for (int index = 0; index < length; index++) {
        if (arrayPtr[index] == targetValue) {
            arrayPtr[index] = replacementValue;
            isUpdated = 1;
        }
    }
    return isUpdated;
}

void printArray(int array[], int length) {
    for (int index = 0; index < length; index++) {
        printf("%d ", array[index]);
    }
    printf("\n");
}

int main() {
    int numberList[ARRAY_SIZE];
    int valueToFind, replacementValue, updateStatus;
    int index;

    printf("Enter %d integer elements for the array:\n", ARRAY_SIZE);
    for (index = 0; index < ARRAY_SIZE; index++) {
        printf("Element %d: ", index + 1);
        scanf("%d", &numberList[index]);
    }

    printf("\nEnter value to search (Search Value): ");
    scanf("%d", &valueToFind);

    printf("\nEnter value to replace it with (New Value): ");
    scanf("%d", &replacementValue);

    printf("\n--- ARRAY UPDATE REPORT ---\n");
    printf("Array BEFORE Update: ");
    printArray(numberList, ARRAY_SIZE);

    updateStatus = findAndUpdate(numberList, ARRAY_SIZE, valueToFind, replacementValue);

    printf("Array AFTER Update: ");
    printArray(numberList, ARRAY_SIZE);

    printf("Status: ");
    if (updateStatus == 0) {
        printf("Failed");
    } else {
        printf("Success");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int MAX_CAPACITY = 10;
    int index, numElements, targetValue;
    int frequencyCount = 0;
    int numberList[MAX_CAPACITY];

    printf("Enter the number of elements (N, max %d): ", MAX_CAPACITY);
    scanf("%d", &numElements);

    if (numElements > MAX_CAPACITY || numElements < 1) {
        numElements = MAX_CAPACITY;
    }

    printf("Enter %d integer numbers:\n", numElements);
    for (index = 0; index < numElements; index++) {
        printf("Element %d: ", index + 1);
        scanf("%d", &numberList[index]);
    }

    printf("Enter the Search Value: ");
    scanf("%d", &targetValue);

    for (index = 0; index < numElements; index++) {
        if (numberList[index] == targetValue) {
            frequencyCount++;
        }
    }

    printf("\n--- FREQUENCY ANALYSIS REPORT ---\n");
    printf("Total elements recorded (N): %d\n", numElements);
    printf("Recorded Numbers: ");
    for (index = 0; index < numElements; index++) {
        printf("%d ", numberList[index]);
    }
    printf("\n");
    printf("Search Value: %d\n", targetValue);
    printf("Frequency Count: %d\n", frequencyCount);

    return 0;
}

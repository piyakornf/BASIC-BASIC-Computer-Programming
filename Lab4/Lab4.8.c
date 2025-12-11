#include <stdio.h>

int main() {
    int MAX_CAPACITY = 10;
    int NOT_COUNTED = -1;
    int frequencyStatus[MAX_CAPACITY];
    int numberList[MAX_CAPACITY];
    int numElements, index, innerIndex;
    int frequency;

    for (index = 0; index < MAX_CAPACITY; index++) {
        frequencyStatus[index] = NOT_COUNTED;
    }

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

    printf("\n--- FREQUENCY ANALYSIS REPORT ---\n");
    printf("Total elements recorded (N): %d\n", numElements);
    printf("Recorded Numbers: ");
    for (index = 0; index < numElements; index++) {
        printf("%d ", numberList[index]);
    }
    printf("\n");

    printf("--- FREQUENCY TABLE ---\n");
    printf("Number | Frequency\n");
    printf("-------|----------\n");

    for (index = 0; index < numElements; index++) {
        if (frequencyStatus[index] == NOT_COUNTED) {
            frequency = 1;

            for (innerIndex = index + 1; innerIndex < numElements; innerIndex++) {
                if (numberList[index] == numberList[innerIndex]) {
                    frequency++;
                    frequencyStatus[innerIndex] = 0;
                }
            }

            printf("%d | %d\n", numberList[index], frequency);
        }
    }

    return 0;
}
